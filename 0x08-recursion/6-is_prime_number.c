#include "main.h"

/**
 * is_prime_number - determines if a number is prime
 * @n: the integer
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n - 1, n));
}

/**
 * prime - determines if h is divisible by l or less
 * @l: lower bound
 * @h: upper bound
 * Return: 1 or 0
 */

int prime(int l, int h)
{
	if (l == 1)
		return (1);
	if (h % l == 0)
		return (0);
	return (prime(l - 1, h));
}
