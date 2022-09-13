#include <unistd.h>
#ifndef _putchar
#include "main.h"
#endif
/**
 * print_alphabet - prints the alphabets to the std output
 * Return: always 0
 */

void print_alphabet(void)
{
	/**
	 * _putchar - print character to the std output
	 * @c: buffer for the alphabets
	 * @i: the loop counter
	 */
	char c[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	for (; i < 27; i++)
	{
		_putchar(c[i]);
	}
}
