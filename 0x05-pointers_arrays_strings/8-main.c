#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5];
	int i;

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	for (i = 0; i < 5; i++)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		if (array[i] < 0)
		{
			_putchar('-');
			array[i] = -array[i];
		}
		if (array[i] >= 100)
		{
			_putchar((array[i] / 100) + '0');
			_putchar(((array[i] / 10) % 10) + '0');
		}
		else if (array[i] >= 10)
		{
			_putchar((array[i] / 10) + '0');
		}
		_putchar((array[i] % 10) + '0');
	}
	_putchar('\n');
	return (0);
}
