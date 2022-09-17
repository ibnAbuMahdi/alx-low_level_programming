#include "main.h"

/**
 * print_triangle - prints triangle of size n made from \#
 * @n: the size of the triangle
 */

void print_triangle(int n)
{
	/**
	 * @c: loop 1 counter
	 * @i: loop 2 counter
	 */
	int i;

	if (n > 0)
	{
		for (i = 1; i < n + 1; i++)
		{
			int c = 1;

			for (; c < n + 1; c++)
			{
				if (c > n - i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
