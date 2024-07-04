#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to use
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;

	while (*d)
		d++;
	while (n-- && *src)
		*d++ = *src++;
	*d = '\0';

	return dest;
}
