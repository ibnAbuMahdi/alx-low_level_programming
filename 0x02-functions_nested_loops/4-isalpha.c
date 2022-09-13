#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif

/**
 * _isalpha - check if a character is alphabet
 * Return: returns 1 if true and 0 if false
 * @c: the character to check
 */

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
