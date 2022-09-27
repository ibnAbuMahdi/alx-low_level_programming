#include "main.h"
#include <stddef.h>
/**
 * _strspn - returns number of bytes in s that matches those in c
 * @s: the pointer to the char array
 * @c: the char array to find
 * Return: number of bytes that match
 */

unsigned int _strspn(char *s, char *c)
{
	/**
	 * @i: loop counter
	 * @j: match counter
	 */
	unsigned int j = 0;
	unsigned int k = 0;
	unsigned int i;

	while (c[j] != 0)
	{
		i = 0;

		while (s[i] != 0)
		{
			if (*(s + i) == c[j])
			{
				k++;
				break;
			}
			i++;
		}
		j++;
	}
	k++;
	return (k);
}
