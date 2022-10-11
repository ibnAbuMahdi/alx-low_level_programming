#ifndef DOG_H
#define DOG_H
/*declare dog with members name, age and owner
 */
typedef struct dog {
	char	*name;
	float 	age;
	char	*owner;
} dog_t;

void init_dog(struct dog *, char *, float, char *);

void print_dog(struct dog *d);
#endif /*DOG_H*/
