#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	_putchar((len / 10) + '0');
	_putchar((len % 10) + '0');
	_putchar('\n');
	return (0);
}
