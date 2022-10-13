#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings passed as var_args
 * @sep: seperator between the strings
 * @n: number of var_args to print
 */

void print_strings(const char *sep, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);
		for (; i < n; i++)
		{
			char *str = va_arg(list, char*);

			if (str)
				printf("%s", str);
			else
				printf("(nil)");

			if (i < n - 1 && sep)
				printf("%s", sep);
		}
	}
	va_end(list);
	printf("\n");
}
