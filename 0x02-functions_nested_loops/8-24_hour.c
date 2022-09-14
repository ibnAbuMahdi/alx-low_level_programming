#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	/**
	 * _putchar - print character to the std output
	 * @H: the hour loop counter
	 * @M: the minutes loop counter
	 * @h: first digit of the hours
	 * @o: second digit of the hours
	 * @m: firt digit of the minutes
	 * @i: second digit of the minutes
	 */
	int H = 0;

	for (; H < 24; H++)
	{
		int M = 0;

		for (; M < 60; M++)
		{
			int h, o, m, i;

			h = H / 10;
			o = H % 10;
			m = M / 10;
			i = M % 10;
			_putchar(h + '0');
			_putchar(o + '0');
			_putchar(':');
			_putchar(m + '0');
			_putchar(i + '0');
			_putchar('\n');
		}
	}
}
