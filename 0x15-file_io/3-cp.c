#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_error_and_exit - Prints an error message and exits the program
 * @msg: The error message to print
 * @code: The exit code
 */
void print_error_and_exit(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * open_file - Opens a file with specified flags and mode
 * @filename: The name of the file to open
 * @flags: The flags for opening the file
 * @mode: The mode for the file (only relevant for creation)
 *
 * Return: The file descriptor of the opened file
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open %s\n", filename);
		exit((flags & O_WRONLY) ? 99 : 98);
	}

	return (fd);
}

/**
 * close_file - Closes a file descriptor
 * @fd: The file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content - Copies the content from one file to another
 * @fd_from: The file descriptor of the source file
 * @fd_to: The file descriptor of the destination file
 */
void copy_content(int fd_from, int fd_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error_and_exit("Error: Can't write to file", 99);
		}
	}

	if (bytes_read == -1)
	{
		print_error_and_exit("Error: Can't read from file", 98);
	}
}

/**
 * main - Copies the content of a file to another file
 * @argc: The number of arguments
 * @argv: The argument vector
 *
 * Return: 0 on success, otherwise exit with status code
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		print_error_and_exit("Usage: cp file_from file_to", 97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	copy_content(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
