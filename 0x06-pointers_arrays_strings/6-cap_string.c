#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	char *s = str;
	int cap_next = 1;

	while (*s)
	{
		if (cap_next && *s >= 'a' && *s <= 'z')
			*s -= 32;

		cap_next = (*s == ' ' || *s == '\t' || *s == '\n' ||
					*s == ',' || *s == ';' || *s == '.' ||
					*s == '!' || *s == '?' || *s == '"' ||
					*s == '(' || *s == ')' || *s == '{' || *s == '}');
		s++;
	}

	return (str);
}
