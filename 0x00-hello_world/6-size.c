#include <stdio.h>

/**
 * main - a necessary function te enable compilation
 *
 * Return: indicates 0 on successful program ran
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("size of int: %lu bytes(s)", sizeof(int));
	printf("size of long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
