#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif

/**
 * _abs - computes the absolute value of an integer
 * Return: returns the computed value
 * @n: the integer to compute
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
