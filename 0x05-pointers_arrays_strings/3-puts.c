#include "main.h"

/**
 * _puts - prints a string to the stdout
 * @s: the string to be printed
 */

void _puts(char *s)
{
	/**
	 * @i: loop and string counter
	 */
	int i = 0;

	while (*(s + i) != 0)
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
