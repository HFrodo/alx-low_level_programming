#include "main.h"

/**
 * print_memory - Prints the memory of a buffer
 * @str: The buffer to print
 */
void print_memory(char *str)
{
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
