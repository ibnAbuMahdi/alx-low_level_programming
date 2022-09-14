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
	 * @c: column counter
	 */
	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; r++)
		{
			int m, f, s;

			m = r * c;
			f = r / 10;
			s = M % 10;
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
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
