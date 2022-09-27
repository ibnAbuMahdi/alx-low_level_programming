#include "main.h"
#include <stddef.h>
/**
 * _strchr - finds the first occurence of c in s
 * @s: the pointer to the char array
 * @c: the char to find
 * Return: a pointer to the first occurence of c or NULL if c not found
 */

char *_strchr(char *s, char c)
{
	/**
	 * @i: loop counter
	 */
	unsigned int i = 0;

	while (s[i] != 0 && c != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	return (NULL);
}
