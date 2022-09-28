#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints chessboard
 * @a: two dimensional array
 * @n: size
 */

void print_diagsums(int *a, int n)
{
	/**
	 * @i:
	 * @j:
	 */
	int i = 0;
	int j;
	int s1 = 0;
	int s2 = 0;
	int *p;

	p = a;
	while (i < n)
	{
		j = 0;

		for (; j < n; j++)
		{
			if (j == i)
			{
				s1 = s1 + *(p + i);
				s2 = s2 + *(p + n - 1 - i);
			}
		}
		i++;
		p = p + n;
	}
	printf("%d, %d\n", s1, s2);
}
