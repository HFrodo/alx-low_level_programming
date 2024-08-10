#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bits = sizeof(n) * 8;
	int started = 0;

	mask <<= (bits - 1);

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (!started)
	{
		_putchar('0');
	}
}
