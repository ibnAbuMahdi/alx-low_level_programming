#include "main.h"

/**
 *
 */

char *string_nconcat(char *a, char *s, unsigned int n)
{
	char *f;
	unsigned int i = 0;
	unsigned int j = 0;
	
	f = malloc(_strlen(a) + n);
	if (!f)
		return (NULL);
	if (a == NULL)
		a = "";
	if (s == NULL)
		s = "";
	if (n > _strlen(s))
		n = _strlen(s);
	for (i = 0; i < _strlen(a); i++)
		f[i] = a[i];
	for(j = 0; j < n; j++, i++)
		f[i] = s[j];
	f[i] = '\0';
	return (f);
}

/**
 *
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}
