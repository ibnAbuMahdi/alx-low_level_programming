#include "main.h"

/**
 * print_square - prints square of size n made from \#
 * @n: the size of the square
 */

void print_square(int n)
{
	/**
	 * @c: loop 1 counter
	 * @i: loop 2 counter
	 */
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int c = 0;

			for (; c < n; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
