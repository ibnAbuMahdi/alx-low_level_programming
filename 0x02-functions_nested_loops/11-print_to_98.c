#include <unistd.h>
#include <stdio.h>
#ifndef _putchar
#include "main.h"
#endif
/**
 * print_to_98 - prints numbers from the input to 98
 * @n: the input
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);

	}
}
