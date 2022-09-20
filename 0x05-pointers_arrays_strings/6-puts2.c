#include "main.h"

/**
 * puts2 - prints every other character in string to the stdout
 * @s: the string to be printed
 */

void puts2(char *s)
{
	/**
	 * @i: loop and string counter
	 */
	int i = 0;

	while (*(s + i * 2) > 0)
	{
		_putchar(*(s + i * 2));
		i++;
	}
	_putchar('\n');
}
