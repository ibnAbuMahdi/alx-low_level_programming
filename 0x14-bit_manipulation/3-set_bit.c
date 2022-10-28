#include "main.h"

/**
 * set_bit - return bit value at index
 * @n: pointer of int to modify
 * @index: index of the bit to set
 * Return: bit value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n |= (1 << index);
	return (1);
}
