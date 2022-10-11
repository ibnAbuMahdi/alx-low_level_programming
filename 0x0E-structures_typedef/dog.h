#ifndef DOG_H
#define DOG_H
/*declare dog with members name, age and owner
 */
struct dog {
	char	*name;
	float 	age;
	char	*owner;
};

void init_dog(struct dog *, char *, float, char *);

#endif /*DOG_H*/
