#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: two dimensional array
 */

void print_chessboard(char (*a)[8])
{
	/**
	 * @i:
	 * @j:
	 */
	unsigned int i = 0;
	unsigned int j;
	char *p = a[0];

	while (*p != 0 && i < 8)
	{
		j = 0;
		for (; j < 8; j++)
		{
			_putchar(*p);
			p = p + 1;
		}
		i++;
		_putchar('\n');
	}
}
