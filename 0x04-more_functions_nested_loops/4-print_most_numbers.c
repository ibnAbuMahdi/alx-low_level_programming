#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	/**
	 * @c: the number
	 */
	char c = '0';

	for (; c < '9' + 1; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
