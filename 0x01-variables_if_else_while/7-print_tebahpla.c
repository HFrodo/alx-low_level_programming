#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
