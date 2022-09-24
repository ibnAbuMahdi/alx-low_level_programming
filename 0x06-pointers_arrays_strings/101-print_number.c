#include "main.h"

/**
 * print_number - prints an integer using _putchar only
 * @m: the integer to print
 */

void print_number(int m)
{
	/**
	 * @n: unsigned version of m
	 */
	unsigned int n = m;

	if (m < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

