#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif

/**
 * print_last_digit - prints the last digit of a number
 * Return: returns the value of the last digit
 * @n: the integer to compute
 */
int print_last_digit(int n)
{
	/**
	 * @r: the remainder to be returned
	 */
	int r;
	if (n > 0)
	{
		r = n % 10;

		_putchar(r + '0');
		return (r);
	}
	else
	{
		r = (-1 * n) % 10;

		_putchar(r + '0');
		return (r);
	}
}
