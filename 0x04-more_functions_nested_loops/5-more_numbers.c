#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 10 times
 */

void more_numbers(void)
{
	/**
	 * @c: the number
	 * @i: loop counter
	 */
	int c = 0;
	int i;

	for(i = 0; i < 10; i++)
	{
		for (; c < 15; c++)
		{
			if (c > 9)
			{
				_putchar(c / 10);
			}
			_putchar(c % 10);
		}
		_putchar('\n');
	}
}
