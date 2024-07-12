#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	char *ptr = s;
	while (*s)
	{
		char *a = accept;
		while (*a && *a != *s)
			a++;
		if (!*a)
			break;
		s++;
	}
	return s - ptr;
}
