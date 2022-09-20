#include "main.h"

/**
 * _strlen - counts the length of a string
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
