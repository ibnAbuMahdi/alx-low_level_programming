#include "main.h"

/**
 * print_diagonal - prints diagonal of size n made from
 * @n: the diagonal size
 */

void print_diagonal(int n)
{
	/**
	 * @c: the number
	 * @i: loop counter
	 */
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			int c = 0;

			for (; c < i + 1; c++)
			{
				if (c != i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
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
