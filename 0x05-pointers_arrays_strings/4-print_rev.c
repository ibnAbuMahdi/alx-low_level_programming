#include "main.h"

/**
 * print_rev- prints a string to the stdout in reverse order
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	/**
	 * @i: loop and string counter
	 */
	int i = _strlen(s);

	while (i != 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}

/**
 * _strlen - counts the length
 * Return: the length as int
 * @s: the string to be counted
 */

int _strlen(char *s)
{
	/**
	 * @i: loop and string counter
	 */
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
