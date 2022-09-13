#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif

/**
 * _islower - check if a character is lower case
 * Return: returns 1 if true and 0 if false
 * @c: the character to check
 */

int _islower(int c)
{
	/**
	 * _putchar - print character to the std output
	 * @c: buffer for the alphabets
	 * @i: the loop counter
	 * @j: second loop counter
	 */
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
