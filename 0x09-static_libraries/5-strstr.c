#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return haystack;
	while (*haystack)
	{
		char *h = haystack, *n = needle;
		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return haystack;
		haystack++;
	}
	return NULL;
}
