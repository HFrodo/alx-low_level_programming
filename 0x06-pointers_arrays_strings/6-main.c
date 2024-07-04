#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. "
				 "Capitalize on what comes.\n";
	char *ptr;
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	ptr = cap_string(str);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	for (i = 0; ptr[i] != '\0'; i++)
		_putchar(ptr[i]);

	return (0);
}
