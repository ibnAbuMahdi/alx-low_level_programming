#include <unistd.h>
#ifndef main_h
#include "main.h"
#endif
/**
 * main - program entry point
 * Return: always 0
 *
 */

int main(void)
{
	/**
	 * _putchar() - function that prints a character at a time
	 * @c: buffer for the _putchar()
	 * @i: iteration counter
	 */
	char c[] = "_putchar\n";
	int i = 0;

	for (; i < 9; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
