#include "main.h"

/**
 * leet - leet
 * @s: the string
 * Return: string
 */

char *leet(char *s)
{
	/**
	 * @i: loop counter
	 */
	int i = 0;

	while (*(s + i) != 0)
	{
		char str[] = "aAeEoOtTlL";
		char rep[] = "43071";
		int k = 0;

		while (str[k] != 0)
		{
			if (s[i] == str[k])
				*(s + i) = rep[k / 2];
			k++;
		}
		i++;
	}
	return (s);
}
