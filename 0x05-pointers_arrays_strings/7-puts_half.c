#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len])
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	while (str[n])
		_putchar(str[n++]);

	_putchar('\n');
}
