#include "main.h"
#include <stdlib.h>

/**
 * words - counts words in string
 * @str: the string
 * Return: count
 */

int words(char *str)
{
	int i = 0;
	int wc = 0;

	while (str[i] != 0)
	{
		if (str[i] != ' ')
		{
			wc++;
			while (str[i] != ' ' && str[i] != 0)
				i++;
		}
		if (str[i] != 0)
			i++;
	}

	return (wc);
}

/**
 * alm - allocates memory
 * @str: the string
 * Return: pointer to the initialized array
 */

char **alm(char *str)
{
	char **a;
	int i = 0;
	int wc = 0;

	a = malloc(sizeof(char *) * (words(str) + 1));
	while (str[i] != 0)
	{
		if (str[i] != ' ')
		{
			int l = 0;

			while (str[i] != ' ' && str[i] != 0)
			{
				l++;
				i++;
			}
			a[wc] = malloc(sizeof(char) * (l + 1));
			wc++;
		}
		if (str[i] != 0)
			i++;
	}
	return (a);
}

/**
 * strtow - converts string to array of words
 * @str: the string
 * Return: pointer to the array
 */

char **strtow(char *str)
{
	int i = 0;
	int wc = 0;
	char **a;

	if (str == NULL || str[i] == 0)
		return (NULL);
	a = alm(str);
	while (str[i] != 0)
	{
		if (str[i] != ' ')
		{
			int l = 0;

			while (str[i] != ' ' && str[i] != 0)
			{
				*(*(a + wc) + l) = str[i];
				l++;
				i++;
			}
			*(*(a + wc) + l) = '\0';
			wc++;
		}
		if (str[i] != 0)
			i++;
	}
	if (wc == 0)
		return (NULL);
	*(a + wc) = NULL;
	return (a);
}
