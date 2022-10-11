#ifndef DOG_H
#define DOG_H
/**
 * struct dog - declare dog with members name, age and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

void init_dog(struct dog *, char *, float, char *);

void print_dog(struct dog *d);

#endif /*DOG_H*/
