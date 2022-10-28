#include "main.h"

/**
 * flip_bits - find the number of bits to flip to turn m to n
 * @n: first int
 * @m: second int
 * Return: number of bits needed to flip to turn n into m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int l = 0;
	unsigned long int xres;

	xres = n ^ m;

	while (xres)
	{
		if (xres & 1)
			l++;
		xres >>= 1;
	}
	return (l);
}
