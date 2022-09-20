#include "main.h"

/**
 * puts_half - prints half
 * @s: the string to be printed
 */

void puts_half(char *s)
{
	/**
	 * @i: loop and string counter
	 * @j: length holder
	 * @n: half the length
	 */
	int i = 0;
	int j = _strlen(s);
	int n;

	n = j / 2;
	if (j % 2 != 0)
	{
		n = (j - 1) / 2;
	}

	while (*(s + i) > 0 && i < n)
	{
		if (j % 2 != 0)
		{
			_putchar(*(s + n + 1 + i));
		}
		else
		{
			_putchar(*(s + n + i));
		}
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
