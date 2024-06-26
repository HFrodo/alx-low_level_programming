#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, next;
	unsigned long int a_half1, a_half2, b_half1, b_half2, half1, half2;

	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
	{
		if (a + b < a || a + b < b) /* overflow occurred */
		{
			a_half1 = a / 1000000000;
			a_half2 = a % 1000000000;
			b_half1 = b / 1000000000;
			b_half2 = b % 1000000000;

			half1 = a_half1 + b_half1;
			half2 = a_half2 + b_half2;
			if (half2 >= 1000000000)
			{
				half1++;
				half2 -= 1000000000;
			}

			printf(", %lu%09lu", half1, half2);

			a = b;
			b = half1 * 1000000000 + half2;
		}
		else
		{
			next = a + b;
			printf(", %lu", next);
			a = b;
			b = next;
		}
	}

	printf("\n");

	return (0);
}
