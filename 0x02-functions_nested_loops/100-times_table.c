#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif
/**
 * print_times_table - prints the n times table
 * @n: integer number
 */
void print_times_table(int n)
{
	/**
	 * _putchar - print character to the std output
	 * @r: row counter
	 */
	if (!(n > 15 || n < 0))
	{
		int r;

		for (r = 0; r < 10; r++)
		{
			int c;

			for (c = 0; c < 10; c++)
			{
				int m, f, s;

				m = r * c;
				f = m / 10;
				s = m % 10;
				print_chars(m, f, s, c);
				if (c != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			} _putchar('\n');
		}
	}
}

/**
 * print_chars - prints the characters but formatted
 * @m: the multiplication result
 * @f: the first digit of the result
 * @s: the second digit of the result
 * @c: the column number
 */
void print_chars(int m, int f, int s, int c)
{
	/**
	 * @t: the middle digit in three digit number
	 */
	int t;

	if (m < 10 && c > 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(m + '0');
	}
	else if (m == 0 && c == 0)
	{
		_putchar('0');
	}
	else if (m > 99)
	{
		t = f % 10;
		f = f / 10;
		_putchar(f + '0');
		_putchar(t + '0');
		_putchar(s + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(f + '0');
		_putchar(s + '0');
	}
}
