#include "main.h"

/**
 * _memset - fills the first n bytes with b
 * @s: the pointer to the char array
 * @b: the char to fill the bytes with
 * @n: the number of bytes to be filled
 * Return: a pointer to the char array
 */

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * @i: loop counter
	 */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
