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

	new = malloc(sizeof(struct dog));
	if (name == NULL)
		name = "\0";
	if (owner == NULL)
		owner = "\0";
	nname = malloc(sizeof(name) * sizeof(char));
	nowner = malloc(sizeof(owner) * sizeof(char));
	if (!new || !nname || !nowner)
	{
		free(new);
		free(nname);
		free(nowner);
		return (NULL);
	}
	while (name != NULL && name[i])
	{
		*(nname + i) = name[i];
		i++;
	}
	*(nname + i) = '\0';
	i = 0;
	while (name != NULL && owner[i])
	{
		*(nowner + i) = owner[i];
		i++;
	}
	*(nowner + i) = '\0';
	new->name = nname;
	new->owner = nowner;
	if (age >= 0)
		new->age = age;
	else
		return (NULL);
	return (new);
}
