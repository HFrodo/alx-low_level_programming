#include <stdio.h>

/**
 * print_initial_fibonacci - Prints the initial Fibonacci numbers
 * @f1: The first Fibonacci number
 * @f2: The second Fibonacci number
 *
 * Return: The count of numbers printed so far
 */
int print_initial_fibonacci(unsigned long f1, unsigned long f2)
{
	int count;
	unsigned long temp;

	printf("%lu, %lu", f1, f2);

	for (count = 2; count < 98; count++)
	{
		if (f1 + f2 < f2)
		{
			break;
		}

		temp = f2;
		f2 = f1 + f2;
		f1 = temp;

		printf(", %lu", f2);
	}

	return (count);
}

/**
 * print_large_fibonacci - Prints the remaining large Fibonacci numbers
 * @first_half1: First half of the first large Fibonacci number
 * @second_half1: Second half of the first large Fibonacci number
 * @first_half2: First half of the second large Fibonacci number
 * @second_half2: Second half of the second large Fibonacci number
 * @count: The count of numbers printed so far
 */
void print_large_fibonacci(unsigned long first_half1,
unsigned long second_half1, unsigned long first_half2,
unsigned long second_half2, int count)
{
	unsigned long new_second_half, carry, new_first_half;

	for (; count < 98; count++)
	{
		new_second_half = second_half1 + second_half2;
		carry = new_second_half / 1000000000;
		new_second_half = new_second_half % 1000000000;
		new_first_half = first_half1 + first_half2 + carry;

		printf(", %lu%09lu", new_first_half, new_second_half);

		first_half1 = first_half2;
		second_half1 = second_half2;
		first_half2 = new_first_half;
		second_half2 = new_second_half;
	}

	printf("\n");
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long f1 = 1, f2 = 2;
	int count;
	unsigned long first_half1, second_half1, first_half2, second_half2;

	count = print_initial_fibonacci(f1, f2);

	first_half1 = f1 / 1000000000;
	second_half1 = f1 % 1000000000;
	first_half2 = f2 / 1000000000;
	second_half2 = f2 % 1000000000;

	print_large_fibonacci(first_half1, second_half1,
	first_half2, second_half2, count);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
