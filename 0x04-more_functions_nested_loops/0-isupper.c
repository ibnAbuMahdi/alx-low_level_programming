#include "main.h"
/**
 * _isupper - checks for if char is upper
 * @c: The char
 * Return: 1 if upper case and 0 if lower case
 */

int _isupper(char c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
