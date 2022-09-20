#include "main.h"

/**
 * puts2 - prints every other character in string to the stdout
 * @s: the string to be printed
 */

void puts2(char *s)
{
	/**
	 * @i: loop and string counter
	 * @j: length holder
	 */
	int i = 0;
	int j = _strlen(s);

	while (*(s + i * 2) > 0 && i * 2 < j)
	{
		_putchar(*(s + i * 2));
		i++;
	}
	_putchar('\n');
}

/**
 * _strlen - counts
 * Return: length
 * @s: the string
 */

int _strlen(char *s)
{
	/**
	 * @i: counter
	 */
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
