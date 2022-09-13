#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif

/**
 * print_sign - check the sign of a number
 * Return: returns 1 if +ve, 0 if 0 and -1 if -ve
 * @n: the character to check
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
