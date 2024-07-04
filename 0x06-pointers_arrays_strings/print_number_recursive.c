#include "main.h"
#include <unistd.h>
/**
 * print_number_recursive - Recursive function to extract digits
 * @n: The number to print
 */
void print_number_recursive(int n)
{
	int digit;
	if (n / 10 != 0)
	{
		print_number_recursive(n / 10);
	}

	digit = (n % 10) + '0';
	write(1, &digit, 1);
}
