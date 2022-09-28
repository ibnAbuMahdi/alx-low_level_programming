#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strstr - find the first occurence of c in s
 * @s: the pointer to the char array
 * @c: the char array to find
 * Return: pointer to the beginning of the located c or NULL if not found
 */

char *_strstr(char *s, char *c)
{
	/**
	 * @i: loop counter
	 * @j: match counter
	 */
	unsigned int i = 0;
	unsigned int j = 0;
	char *p;
	unsigned int st = 0;

	if (c[0] == 0)
		return (NULL);
	while (s[i] != 0)
	{
		if (st != 0 && s[i] == c[j])
		{
			j++;
		}
		else if (st == 0 && s[i] == c[j])
		{
			p = s + i;
			st = 1;
			j++;
		}
		else if (st != 0 && s[i] != c[j] && c[j] != 0)
		{
			st = 0;
			j = 0;
		}
		i++;
		if (c[j] == 0 && j > 0)
			return (p);

	}
	return (NULL);
}
