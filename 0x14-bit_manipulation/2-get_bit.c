#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to get the bit from.
 * @index: the index of the bit.
 *
 * Return: value of bit index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
