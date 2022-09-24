#include "main.h"

/**
 * rot13 - rot13 encode/decode
 * @s: the string
 * Return: string
 */

char *rot13(char *s)
{
	/**
	 * @i: loop counter
	 */
	int i = -1;

	while (i == -1 || *(s + i) != 0)
	{
		i++;
		while ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			if (s[i] < 78 || (s[i] < 110 && s[i] > 96))
				*(s + i) = s[i] + 26;
			*(s + i) = s[i] - 13;
			i++;
		}
	}
	return (s);
}
