#include "main.h"

/**
 * get_bit - return bit value at index
 * @n: int to parse
 * @index: index of the bit to get
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 0, len = 0;
	unsigned long int m = n;

	while (m)
	{
		m >>= 1;
		len++;
	}
	if ((len - 1) < index)
		return (-1);	
	n &= (1 << index);
	while (n)
	{
		bit = (n & 1) > bit ? 1 : bit;
		n >>= 1;
	}
	return (bit);
}
