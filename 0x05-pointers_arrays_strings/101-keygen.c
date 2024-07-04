#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int key_length = 12; // Adjust this to the required length of your password
	int i;

	srand(time(NULL));

	for (i = 0; i < key_length; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		putchar(charset[index]);
	}
	putchar('\n');

	return 0;
}
