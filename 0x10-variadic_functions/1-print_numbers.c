#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers passes as var_args
 * @sep: seperator between the numbers
 * @n: number of var_args to print
 */

void print_numbers(const char *sep, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	if (n > 0)
	{
		va_start(list, n);
		for (; i < n; i++)
		{
			printf("%d", va_arg(list, const unsigned int));
			if (i < n - 1 && sep)
				printf("%s", sep);
		}
	}
	printf("\n");
}
