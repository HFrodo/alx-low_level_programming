#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return s;
		s++;
	}
	return (c == '\0') ? s : NULL;
}
