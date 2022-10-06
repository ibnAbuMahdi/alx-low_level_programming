#include "main.h"
#include <limits.h>
/**
 *
 */

void *malloc_checked(unsigned int b)
{
	void *s;
       
	s = malloc(b);

	if (b < INT_MAX && s)
		return (s);
	else
		exit(98);
}
