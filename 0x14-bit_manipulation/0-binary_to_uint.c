#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary string to int
 * @b: the string
 * Return: int version of the binary
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0, len, bit;

	if (!b)
		return (num);
	for (len = 0; b[len]; len++)
		;
	len--;
	while (i <= len)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		bit = b[i] == '1' ? 1 : 0;
		num += _pow(2, len - i) * bit;
		i++;
	}

	return (num);
}

/**
 * _pow - computes the yth power of x
 * @x: the base
 * @y: the exponent
 * Return: x to the yth power or -1 if y is -ve
 */

unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow(x, y - 1));
	else
		return (-1);
}
