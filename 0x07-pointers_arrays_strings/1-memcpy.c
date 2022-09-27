#include "main.h"

/**
 * _memcpy - fills the first n bytes of dest with n bytes from source
 * @s: the pointer to the source array
 * @d: the pointer to the dest array
 * @n: the number of bytes to be filled
 * Return: a pointer to the dest array
 */

char *_memcpy(char *d, char *s, unsigned int n)
{
	/**
	 * @i: loop counter
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(d + i) = s[i];
	}

	return (d);
}
