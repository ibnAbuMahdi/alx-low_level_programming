#include "main.h"

/**
 * clear_bit - set bit value at index to 0
 * @n: pointer of int to modify
 * @index: index of the bit to set
 * Return: 1 if success -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
