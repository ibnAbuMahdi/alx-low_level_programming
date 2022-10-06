#include "main.h"
#include <limits.h>
/**
 * malloc_checked - allocates memory
 * @b: memory size
 * Return: pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (b < INT_MAX && s)
		return (s);
	exit(98);
}
