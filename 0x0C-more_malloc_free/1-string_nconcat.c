#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @a: string to concatenate full
 * @s: string to concatenate n chars from
 * @n: number of chars from @s to concatenate
 * Return: pointer to the newly allocated space for the concat
 */

char *string_nconcat(char *a, char *s, unsigned int n)
{
	char *f;
	unsigned int i = 0;
	unsigned int j = 0;

	if (a == NULL)
		a = "";
	if (s == NULL)
		s = "";
	if (n > _strlen(s))
		n = _strlen(s);
	f = malloc(_strlen(a) + n + 1);
	if (!f)
		return (NULL);
	for (i = 0; i < _strlen(a); i++)
		*(f + i) = a[i];
	for (j = 0; j < n; j++, i++)
		*(f + i) = s[j];
	f[i] = '\0';
	return (f);
}

/**
 * _strlen - get the length of string
 * @s: the string
 * Return: length as int
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
