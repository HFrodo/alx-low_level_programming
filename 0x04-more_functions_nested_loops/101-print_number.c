#include "main.h"

/**
 * print_number - prints int
 * @num: designated int
 */
void print_number(int num)
{
	unsigned int num1;

	if (num < 0)
	{
		num1 = -num;
		_putchar('-');
	}
	else
	{
		num1 = num;
	}

	if (num1 / 10)
	{
		print_number(num1 / 10);
	}

	_putchar((num1 % 10) + '0');
}
