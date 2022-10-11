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
	char *nname;
	char *nowner;
	int i = 0;

	new = malloc(sizeof(dog_t));
	nname = malloc(sizeof(name));
	nowner = malloc(sizeof(owner));

	if (!new || !nname || !owner)
		return (NULL);
	while (name[i])
	{
		nname[i] = name[i];
		i++;
	}
	nname[i] = '\0';

	i = 0;
	while (owner[i])
	{
		nowner[i] = owner[i];
		i++;
	}
	nowner[i] = '\0';

	new->name = nname;
	new->owner = nowner;
	new->age = age;

	return (new);
}
