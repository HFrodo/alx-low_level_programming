#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: designated name
 * @f: pointer to a function that prints a name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
