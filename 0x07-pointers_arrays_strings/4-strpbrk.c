#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurence in s of any byte in c
 * @s: the pointer to the char array
 * @c: the char array to find
 * Return: pointer to the byte in s that matches one of the bytes in c
 */

char *_strpbrk(char *s, char *c)
{
	/**
	 * @i: loop counter
	 * @j: match counter
	 */
	unsigned int i = 0;
	unsigned int j;

	while (s[i] != 0)
	{
		j = 0;

		while (c[j] != 0)
		{
			if (*(s + i) == c[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
