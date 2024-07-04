#include "main.h"
#include <unistd.h>

/**
 * print_number - Prints an integer using only recursion
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		print_number_recursive(-n);
	}
	else if (n == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		print_number_recursive(n);
	}
}
