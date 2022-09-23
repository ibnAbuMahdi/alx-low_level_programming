#include "main.h"

/**
 * string_toupper - changes lower cases to upper cases
 * @s: the string
 * Return: returns string
 */

char *string_toupper(char *s)
{
	/**
	 * @i: loop counter
	 */
	int i = 0;

	while (*(s + i) != 0)
	{
		if (s[i] > 96 && s[i] < 123)
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}
