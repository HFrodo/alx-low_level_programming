#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Initial segment
 * @accept: Accepted bytes
 *
 * Return: Number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			return (count);
	}
	return (count);
}
