#include <stdio.h>

void __attribute__((constructor)) tortoise_hare(void);

/**
 * tortoise_hare - prints string then the main function is executed
 */
void tortoise_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
