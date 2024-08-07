#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string (a duplicate)
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string;NULL 4 insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';

	return (dup);
}
