#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num;
	long int maxim;
	long int i;

	num = 612852475143;
	maxim = -1;

	while (num % 2 == 0)
	{
		maxim = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			maxim = i;
			num /= i;
		}
	}

	if (num > 2)
		maxim = num;

	printf("%ld\n", maxim);

	return (0);
}
