#include "main.h"

/**
 * get_endianness - determine the type of CPU endianness
 * Return: 0 if Big Endian and 1 otherwise
 */

int get_endianness(void)
{
	char s[3] = "ab";

	if (s > s + 1)
		return (0);
	return (1);
}
