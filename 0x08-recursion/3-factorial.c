#include "main.h"

/**
 * factorial - computes the factorial of n
 * @n: the integer
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
