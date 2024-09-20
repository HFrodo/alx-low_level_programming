#include <stdio.h>

int is_palindrome(int n)
{
	int reversed = 0, original = n, remainder;

	while (n != 0)
	{
		remainder = n % 10;
		reversed = reversed * 10 + remainder;
		n /= 10;
	}

	return reversed == original;
}

int main()
{
	int max_palindrome = 0;
	int i, j;

	for (i = 999; i >= 100; i--)
	{
		for (j = i; j >= 100; j--)
		{
			int product = i * j;
			if (is_palindrome(product) && product > max_palindrome)
			{
				max_palindrome = product;
			}
		}
	}

	FILE *file = fopen("102-result", "w");
	if (file != NULL)
	{
		fprintf(file, "%d", max_palindrome);
		fclose(file);
	}

	return 0;
}
