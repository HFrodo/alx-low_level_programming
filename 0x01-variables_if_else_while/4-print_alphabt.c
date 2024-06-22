#include <stdio.h>

/**
 * main - prints the lowercase alphabets except e & q
 *
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
