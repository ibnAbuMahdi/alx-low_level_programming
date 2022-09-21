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
	int st = 0;
	int j = 0;

	while (*(src + i) > 0 && i < n)
	{
		if (st > 0)
		{
			*(dest + j) = *(src + i);
			i++;
			j++;
		}
		else if (*(dest + j) > 0)
		{
			j++;
		}
		else if (*(dest + j) == 0)
		{
			st = 1;
		}
	}
	*(dest + j) = '\0';
	return (dest);
}
