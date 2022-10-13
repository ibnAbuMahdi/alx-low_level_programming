#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - prints all va_args
 * @format: format of the args
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list list;

	while (format && format[j] != 'c' &&
			format[j] != 'i' && format[j] != 'f' && format[j] != 's')
		j++;
	va_start(list, format);
	while (format && format[i])
	{
		if (i > j && (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
			printf(", ");
		switch (format[i])
		{
			case ('c'):
				printf("%c", va_arg(list, int));
				break;
			case ('i'):
				printf("%d", va_arg(list, int));
				break;
			case ('f'):
				printf("%f", va_arg(list, double));
				break;
			case ('s'):
			{
				char *str = va_arg(list, char*);

				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
			}
		}
		i++;
	}
	printf("\n");
	va_end(list);
}




