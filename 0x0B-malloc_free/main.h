#ifndef MAIN_H
#define MAIN_H

void _putchar(char c);

char *create_array(unsigned int, char);

char *_strdup(char *);

unsigned int _strlen(char *);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int, int);

void free_grid(int **, int);

char *argstostr(int, char **);


#endif
