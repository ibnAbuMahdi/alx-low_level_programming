#include "main.h"

/**
 * print_line - prints horizontal line of length n _
 * @n: line size
 */

void print_line(int n)
{
	/**
	 * @c: the number
	 */
	int c = 0;

	if (n > 0)
	{
		for (; c < n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
