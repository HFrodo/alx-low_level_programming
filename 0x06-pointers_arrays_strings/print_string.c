#include "main.h"

/**
 * print_string - Prints a string character by character using _putchar
 * @str: The string to be printed
 */
void print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
