#include "main.h"
#include <limits.h>
/**
 * _calloc - allocates memory to array
 * @b: memory size per array element
 * @n: number of array elements
 * Return: pointer to the memory
 */

void *_calloc(unsigned int n, unsigned int b)
{
	void *s;
	int i;

	if (n == 0 || b == 0)
		return (NULL);

	s = malloc(n * b);

	if (n * b < INT_MAX && s)
	{
		for (i = 0; i < n * b; i++)
			s[i] = 0;
		return (s);
	}
	return (NULL);
}
