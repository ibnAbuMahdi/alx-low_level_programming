#include "main.h"

/**
 * _strcpy - copy a string to another
 * @dest: destination address
 * @src: source address
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	/**
	 * @i: loop counter
	 */
	int i = 0;

	while (*(src + i) > 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
