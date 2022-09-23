#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the string to append to
 * @src: the string to be appended
 * @n: number of bytes to copy
 * Return: pointer to a string
 */

char *_strncat(char *dest, char  *src, int n)
{
	/**
	 * @i: src index tracker
	 * @st: operation switch
	 * @j: dest index tracker
	 */
	int i = 0;
	int st = _strlen(dest);

	for (; i < n && *(src + i) != 0; i++)
	{
		*(dest + st + i) = *(src + i);
	}
	*(dest + st + i) = '\0';
	return (dest);
}

/**
 * _strlen - computes length of string
 * @s: the string
 * Return: the length as int
 */

int _strlen(char *s)
{
	/**
	 * @i: loop and string counter
	 */
	int i = 0;

	while (*(s + i) != 0)
		i++;
	return (i);
}

