#include <unistd.h>
#ifndef _putchar
#include "main.h"
#endif
/**
 * print_alphabet_x10 - prints the alphabets to the std output
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	/**
	 * _putchar - print character to the std output
	 * @c: buffer for the alphabets
	 * @i: the loop counter
	 * @j: second loop counter
	 */
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	for (; i < 10; i++)
	{
		int j = 0;

		for(; j < 27; j++)
		{
			_putchar(c[j]);
		}
	}
}
