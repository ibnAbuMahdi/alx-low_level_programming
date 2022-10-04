#include "main.h"
#include <stdlib.h>

/**
 * create_array - create string array of size s
 * @size: size of the string
 * @c: the first char
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(int) * size);
	if (s != NULL)
	{
		for (i = 0; i < size; i++)
		{
			*(s + i) = c;
		}
	}
	return (s);
}
