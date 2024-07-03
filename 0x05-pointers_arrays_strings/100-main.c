#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int nb;

	nb = _atoi("98");
	print_number(nb);
	_putchar('\n');
	nb = _atoi("-402");
	print_number(nb);
	_putchar('\n');
	nb = _atoi("          ------++++++-----+++++--98");
	print_number(nb);
	_putchar('\n');
	nb = _atoi("214748364");
	print_number(nb);
	_putchar('\n');
	nb = _atoi("0");
	print_number(nb);
	_putchar('\n');
	nb = _atoi("Suite 402");
	print_number(nb);
	_putchar('\n');
	nb = _atoi("         +      +    -    -98 Battery Street; "
			   "San Francisco, CA 94111 - USA             ");
	print_number(nb);
	_putchar('\n');
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	print_number(nb);
	_putchar('\n');
	return (0);
}
