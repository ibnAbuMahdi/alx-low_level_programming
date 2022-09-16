#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 */

void print_numbers(void)
{
	/**
	 * @c: the char
	 */
	char c = '0';

	for (; c < '9' + 1; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
