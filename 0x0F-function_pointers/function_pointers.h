#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
int _putchar(char);

void print_name(char *name, void (*)(char *));

void array_iterator(int *array, size_t, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));
#endif /* MAIN_H */
