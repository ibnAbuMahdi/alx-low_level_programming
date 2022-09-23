#include "main.h"

/**
 * reverse_array - reverses the content of int array
 * @a: the int array
 * @n: the array size
 */

void reverse_array(int *a, int n)
{
	/**
	 * @t: placeholder
	 * @c: placeholder
	 * @k: loop counter
	 * @i: loop counter
	 */
	int t;
	int c;
	int k = n;
	int i;

	for (i = 0; i < n / 2 ; i++)
	{
		k--;
		t = a[k];
		c = a[i];
		*(a + k) = c;
		*(a + i) = t;
	}
}
