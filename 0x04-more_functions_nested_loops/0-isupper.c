#include "main.h"
/**
 * _isupper - checks for if char is upper
 * @c: The char
 * Return: 1 if upper case and 0 if lower case
 */

int _isupper(char c)
{
	if (c + 0 < 91 && c + 0 > 64)
	{
		return (1);
	}
	else if (c + 0 < 123 && c + 0 > 96)
	{
		return (0);
	}
}
