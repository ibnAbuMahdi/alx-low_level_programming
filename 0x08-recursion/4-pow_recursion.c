#include "main.h"

/**
 * _pow_recursion - computes the yth power of x recursively
 * @x: the base
 * @y: the exponent
 * Return: x to the yth power or -1 if y is -ve
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}

