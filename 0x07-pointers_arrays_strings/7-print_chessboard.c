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

	while (a[i][0] != 0)
	{
		j = 0;
		for (; j < 8; j++)
			_putchar(a[i][j]);
		i++;
		_putchar('\n');
	}
}
