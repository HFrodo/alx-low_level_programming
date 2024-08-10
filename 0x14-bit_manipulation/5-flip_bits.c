#include "main.h"

/**
 * flip_bits - returns number of bits to flip from one no. to next
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}
