#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	/**
	 * _putchar - print character to the std output
	 * @r: row counter
	 */
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
			print_chars(m, f, s);
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		} _putchar('\n');
	}
}

/**
 * print_chars - prints the characters but formatted
 * @m: the multiplication result
 * @f: the first digit of the result
 * @s: the second digit of the result
 */
void print_chars(int m, int f, int s)
{
	if (m == 0 && c > 0)
	{
		_putchar(' ');
		_putchar(m + '0');
	}
	else if (m == 0 && c == 0)
	{
		_putchar('0');
	}
	else if (m < 10)
	{
		_putchar(' ');
		_putchar(m + '0');
	}
	else
	{
		_putchar(f + '0');
		_putchar(s + '0');
	}
}
