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
	unsigned int i = 0;
	unsigned int k = 0;
	unsigned int j;
	unsigned int t;
	unsigned int st;

	while (s[i] != 0)
	{
		j = 0;
		t = k;

		while (c[j] != 0)
		{
			if (*(s + i) == c[j])
			{
				st = 1;
				k++;
				break;
			}
			j++;
		}
		if (st > 0 && t == k)
			break;
		i++;

	}
	if (s[i] == 0)
		k++;
	return (k);
}
