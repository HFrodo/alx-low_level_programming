#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to print
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i, j, temp, digit;

	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			_putchar('-');
			temp = -a[i];
		}
		else
		{
			temp = a[i];
		}

		digit = temp;
		for (j = 1; digit > 9; j *= 10)
		{
			digit /= 10;
		}

		while (j >= 1)
		{
			_putchar((temp / j) % 10 + '0');
			j /= 10;
		}

		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
