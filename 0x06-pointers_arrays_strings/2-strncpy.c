#include "main.h"

/**
 * _strncpy - copy src into dest
 * @dest: the string to copy to
 * @src: the string to be copied
 * @n: number of bytes to copy
 * Return: pointer to a string
 */

char *_strncpy(char *dest, char  *src, int n)
{
	/**
	 * @i: src index tracker
	 * @st: operation switch
	 * @j: dest index tracker
	 */
	int i = 0;

	for (i = 0; i < n && *(src + i) > 0; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = 0;
	return (dest);
}
