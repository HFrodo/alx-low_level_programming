#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find the square root of.
 * Return: the natural square root, or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - helper function to find square root.
 * @n: the number to find the square root of.
 * @i: the current guess for the square root.
 * Return: the square root, or -1 if it does not exist.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}
