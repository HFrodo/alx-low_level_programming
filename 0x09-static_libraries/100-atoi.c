#include "main.h"

int _atoi(char *s)
{
	int sign = 1, result = 0;
	while (*s && (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\v' || *s == '\f' || *s == '\r'))
		s++;
	if (*s == '-' || *s == '+')
		sign = (*s++ == '-') ? -1 : 1;
	while (*s && *s >= '0' && *s <= '9')
		result = result * 10 + (*s++ - '0');
	return result * sign;
}
