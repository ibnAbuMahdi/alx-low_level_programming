#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog struct and all its member pointers
 * @d: the pointer to dog struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
