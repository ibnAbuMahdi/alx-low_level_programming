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
	int i = 0;

	new = malloc(sizeof(struct dog));
	if (!new)
		return (NULL);
	new->name = malloc(sizeof(name) * sizeof(char));
	new->owner = malloc(sizeof(owner) * sizeof(char));
	if (!new->name || !new->owner)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	while (name != NULL && name[i])
	{
		*(new->name + i) = name[i];
		i++;
	}
	*(new->name + i) = '\0';
	i = 0;
	while (owner != NULL && owner[i])
	{
		*(new->owner + i) = owner[i];
		i++;
	}
	*(new->owner + i) = '\0';
	if (age >= 0)
		new->age = age;
	else
		return (NULL);
	return (new);
}
