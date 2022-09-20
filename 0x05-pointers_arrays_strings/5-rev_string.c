#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 */

void rev_string(char *s)
{
	/**
	 * @i: loop and string counter
	 * @j: string counter for the reversed string
	 * @k: second loop counter
	 * @f: first char
	 * @c: last char
	 */
	int i = _strlen(s);
	int k = 0;
	char c;

	while (k < i)
	{
		i--;
		c = *(s + k);
		*(s + k) = *(s + i);
		*(s + i) = c;
		k++;
	}
}
/**
 * _strlen - counts the length
 * Return: the length as int
 * @s: the string to be counted
 */

int _strlen(char *s)
{
	/**
	 * @i: loop and string counter
	 */
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
