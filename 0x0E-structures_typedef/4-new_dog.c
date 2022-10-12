#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	char* temp;
	int i = 0;
	for (; str[i]; i++)
		;
	temp = malloc(i+1);
	if (!temp)
		return (NULL);
	i = 0;
	while (1)
	{
		temp[i] = str[i];
		if (str[i])
			i++;
		else
			break;
	}
	return (temp);
}
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
	int ln, lo;
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
	new->name = name;
	new->owner = owner;
	return (new);
}
