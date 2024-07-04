#include "main.h"
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_number(98);
	write(1, "\n", 1);
	print_number(402);
	write(1, "\n", 1);
	print_number(1024);
	write(1, "\n", 1);
	print_number(0);
	write(1, "\n", 1);
	print_number(-98);
	write(1, "\n", 1);

	return (0);
}
