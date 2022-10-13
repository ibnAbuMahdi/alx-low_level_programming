#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum variable arguments passed
 * @n: number of the arguments to be summed
 * Return: the sum or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	while (i < n)
	{
		sum += va_arg(list, const unsigned int);
		i++;
	}
	va_end(list);
	return (sum);
}
