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

	if (n == 0 || b == 0)
		return (NULL);

	s = malloc(n * b);

	if (s)
		return (s);
	return (NULL);
}
