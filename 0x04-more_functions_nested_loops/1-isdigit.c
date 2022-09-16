#include "main.h"
/**
 * _isdigit - checks for if char is upper
 * @c: The int
 * Return: 1 if upper case and 0 if lower case
 */

int _isdigit(int c)
{
	if (c < 58 && c > 47)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
