#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog's struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int ln, lo, i;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	for (ln = 0; name[ln]; ln++)
		;
	for (lo = 0; owner[lo]; lo++)
		;

	new->name = malloc(ln + 1);
	while (!new->name)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(lo + 1);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;
	for (i = 0; i < ln; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';
	for (i = 0; i < lo; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';
	return (new);
}
