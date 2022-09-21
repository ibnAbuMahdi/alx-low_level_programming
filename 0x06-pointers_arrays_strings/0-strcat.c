#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the string to append to
 * @src: the string to be appended
 * Return: pointer to a string
 */

char *_strcat(char *dest, char  *src)
{
	/**
	 * @i: src index tracker
	 * @st: operation switch
	 * @j: dest index tracker
	 */
	int i = 0;
	int st = 0;
	int j = 0;

	while (*(src + i) > 0)
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
	return (dest);
}
