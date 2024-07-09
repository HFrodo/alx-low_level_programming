#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to locate
 *
 * Return: Pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (start);
		haystack = start + 1;
	}
	return (NULL);
}
