#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to the variable n each time it is executed
 *
 * Return: 0 if program is successful
 */
int main(void)
{
	int n, last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_d = n % 10;

	printf("Last digit of %i is %i ", n, last_d);
	if (last_d > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_d == 5)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
