#include "main.h"

/**
 * _sqrt_recursion - computes the square root of n
 * @n: the integer
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (square(1, n));
}

/**
 * square - compute the square of l up to h
 * @l: lower bound
 * @h: upper bound
 * Return: the square of l
 */

int square(int l, int h)
{
	if (l * l > h)
		return (-1);
	if (l * l == h)
		return (l);
	return (square(l + 1, h));
}
