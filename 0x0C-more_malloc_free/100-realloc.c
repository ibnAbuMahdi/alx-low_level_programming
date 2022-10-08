#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: pointer to reallocate memory to
 * @o: initial size
 * @n: new size
 * Return: pointer to void
 */

void *_realloc(void *ptr, unsigned int o, unsigned int n)
{
	char *new;
	char *t;
	unsigned int min;
	unsigned int i;

	if (ptr && !n)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
	{
		new = malloc(n);

		if (new)
			return (new);
		else
			return (NULL);
	}

	if (o == n)
		return (ptr);

	min = n > o ? o : n;

	new = malloc(n);
	if (!new)
		return (NULL);
	t = ptr;
	for (i = 0; i < min; i++)
		new[i] = *(t + i);

	free(ptr);
	return ((void *) new);

}
