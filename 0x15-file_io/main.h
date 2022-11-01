#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>

int _putchar(char);

ssize_t read_textfile(const char *, size_t);

int create_file(const char *, char *);

size_t _strlen(char *);

int append_text_to_file(const char *, char *);

void copy(int, int, char *, char *);

void call_close(int);
#endif /*MAIN_H*/
