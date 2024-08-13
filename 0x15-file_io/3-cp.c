#include "main.h"
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Print an error message and exit
 * @msg: The error message
 * @code: The exit code
 */
void print_error_and_exit(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * open_file - Open a file with given flags and mode
 * @filename: The name of the file to open
 * @flags: The flags to use when opening the file
 * @mode: The mode to use when creating the file
 *
 * Return: The file descriptor
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * close_file - Close a file descriptor
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
 * copy_content - Copy the content of one file to another
 * @fd_from: The file descriptor to read from
 * @fd_to: The file descriptor to write to
 */
void copy_content(int fd_from, int fd_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to fd %d\n", fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from fd %d\n", fd_from);
		exit(98);
	}
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	copy_content(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
