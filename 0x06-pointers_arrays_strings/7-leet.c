#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
	char *s = str;
	char leet[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	while (*s)
	{
		int i;
		for (i = 0; leet[i]; i++)
		{
			if (*s == leet[i])
			{
				*s = code[i];
				break;
			}
		}
		s++;
	}

	return (str);
}
