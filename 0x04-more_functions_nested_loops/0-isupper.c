#include "main.h"
/**
 * _isupper - checks for if char is upper
 * @c: The char
 */

int _isupper(int c)
{
	if (c < 91 && c > 64)
	{
		return (1);
	}
	else if (c < 123 && c > 96)
	{
		return (0);
	}
}
