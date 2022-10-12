#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name using function pointer f
 * @name: name to print
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	char *buf;
	int i, ln;

	for (ln = 0; name[ln]; ln++)
		;
	buf = malloc(ln + 1);
	if (buf)
	{
		for (i = 0; i < ln; i++)
			buf[i] = name[i];
		buf[i] = '\0';

		f(buf);
	}
}
