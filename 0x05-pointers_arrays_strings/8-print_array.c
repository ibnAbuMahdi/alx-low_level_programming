#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a section of an array
 * @a: the array
 * @n: the number of the elements to be printed
 */

void print_array(int *a, int n)
{
	/**
	 * @i: loop counter
	 */
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
