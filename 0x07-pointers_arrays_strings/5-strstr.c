#include "main.h"
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
	char *st = NULL;

	while (s[i] != 0)
	{
		if (st != NULL && s[i] == c[j])
		{
			j++;
		}
		else if (s[i] == c[j])
		{
			st = s + i;
			j++;
		}
		else if (st != NULL && s[i] != c[j] && s[i] != 0 && c[j] != 0)
		{
			st = NULL;
			j = 0;
		}
		i++;
		if (s[i] == 0 && c[j] != 0)
			st = NULL;
	}
	return (st);
}
