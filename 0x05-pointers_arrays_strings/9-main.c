#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	_puts(s1);
	_puts(ptr);
	return (0);
}
