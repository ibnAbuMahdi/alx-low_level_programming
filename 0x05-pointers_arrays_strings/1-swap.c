#include "main.h"

/**
 * swap_int - swap the values of a and b
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	/**
	 * @A: holder for value of *a
	 * @B: holder for value of *b
	 */

	int A = *a;
	int B = *b;

	*a = B;
	*b = A;
}

