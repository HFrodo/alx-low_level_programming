#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * @argc: Number if arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
