#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference
 */

int _strcmp(char *s1, char *s2)
{
	/**
	 * @dif: difference
	 * @i: loop counter
	 */
	int dif = 0;
	int i = 0;

	while (dif == 0 && *(s1 + i) != 0 && *(s2 + i) != 0)
	{
		dif = *(s1 + i) - *(s2 + i);
		i++;
	}

	if (*(s1) == 0)
		dif = 0 - *(s2);
	else if (*(s2) == 0)
		dif = *(s1) - 0;

	return (dif);
}
