#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate str
 * @str: string to duplicate
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);
	s = (char *) malloc(_strlen(str));
	if (sizeof(s) < sizeof(str))
		return (NULL);
	if (s != NULL)
	{
		while (str[i] != '\0')
		{
			*(s + i) = str[i];
			i++;
		}
		*(s + i) = '\0';
	}
	return (s);
}

/**
 * _strlen - gets length of the string s
 * @s: the string
 * Return: length
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != 0)
		i++;
	if (s[i] == 0)
		i++;
	return (i);
}





