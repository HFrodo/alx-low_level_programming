#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";
	int result;
	char buffer[10];
	int i;

	result = _strcmp(s1, s2);
	i = 0;
	do	{
		buffer[i++] = result % 10 + '0';
		result /= 10;
	} while (result != 0);
	while (i > 0)
		_putchar(buffer[--i]);
	_putchar('\n');

	result = _strcmp(s2, s1);
	i = 0;
	do	{
		buffer[i++] = result % 10 + '0';
		result /= 10;
	} while (result != 0);
	while (i > 0)
		_putchar(buffer[--i]);
	_putchar('\n');

	result = _strcmp(s1, s1);
	i = 0;
	do	{
		buffer[i++] = result % 10 + '0';
		result /= 10;
	} while (result != 0);
	while (i > 0)
		_putchar(buffer[--i]);
	_putchar('\n');

	return (0);
}
