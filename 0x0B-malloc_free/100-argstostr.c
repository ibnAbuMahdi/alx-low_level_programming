#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all strings in the args
 * @ac: args length
 * @av: args
 * Return: pointer to newly allocated space in memory
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0;
	unsigned int l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
		l = l + _strlen(av[i]);

	s = (char *) malloc(l * sizeof(char) + 1);
	i = 0;
	if (s != NULL)
	{
		int j = 0;

		while (j < ac)
		{
			int k = 0;

			while (av[j][k] != 0)
			{
				s[i] = av[j][k];
				k++;
				i++;
			}
			s[i] = '\n';
			j++;
			i++;

		}
		s[i] = '\0';
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





