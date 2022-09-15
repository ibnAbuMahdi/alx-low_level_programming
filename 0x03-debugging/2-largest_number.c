#include "main.h"

/**
 * largest_number - returns largest number of the 3
 * Return: the largest number
 * @a: the first number
 * @b: the second number
 * @c: the third number
 */

int largest_number(int a, int b, int c)
{
	/**
	 * @largest: placeholder for the largest number
	 */
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else if (c == a && c > b)
	{
		largest = c;
	}
	else if (c == b && c > a)
	{
		largest = c;
	}
	else if (a == b && b > c)
	{
		largest = a;
	}
	else
	{
		largest = a;
	}

	return (largest);
}
