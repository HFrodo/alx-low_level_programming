#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst."
			   "Capitalize on what comes.\n";
	char *p;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	p = leet(s);

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	for (i = 0; p[i] != '\0'; i++)
		_putchar(p[i]);

	return (0);
}
