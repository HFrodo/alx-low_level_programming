#include "main.h"
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	int i;

	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
			 0123456789";

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int key = rand() % (sizeof(charset) - 1);

		password[i] = charset[key];
	}

	password[PASSWORD_LENGTH] = '\0';

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		_putchar(password[i]);
	}
	_putchar('\n');

	return (0);
}
