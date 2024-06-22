#include <stdio.h>

/**
 * main - Prints combinations of single digits + ','
 * in ascending order
 *
 * Return: 0 if successful
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
