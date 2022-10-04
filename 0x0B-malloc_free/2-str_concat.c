#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 * Return: pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = (char *) malloc(_strlen(s1) + _strlen(s2) - 1);

	if (s != NULL)
	{
		int j = 0;

		while (s1[i] != '\0')
		{
			*(s + i) = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			*(s + i) = s2[j];
			i++;
			j++;
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





