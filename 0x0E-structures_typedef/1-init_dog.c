#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize dog
 * @d: pointer to dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		if (name)
			(*d).name = name;
		if (age >= 0)
			(*d).age = age;
		if (owner)
			(*d).owner = owner;
	}
}
