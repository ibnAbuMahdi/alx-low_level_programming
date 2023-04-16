#include "search_algos.h"

/**
 * binary_search - binary searches array @array for @val
 * @array: the array to search
 * @size: the size of the array
 * @val: the value to search
 * Return: the index of @val if found and -1 o.w.
 */

int binary_search(int *array, size_t size, int val)
{
	size_t lo = 0, mid, hi;

	if (!array || size == 0)
		return (-1);
	hi = size - 1;
	print_array(array, lo, hi);
	while (hi != lo)
	{
		mid = lo + (hi - lo) / 2;
		if (val == array[mid])
			return ((int) mid);
		if (val > array[mid])
			lo = mid + 1;
		else if (val < array[mid])
			hi = mid == 0 ? 0 : mid - 1;
		else
			break;

		print_array(array, lo, hi);
	}
	if (hi == lo && val == array[hi])
		return ((int) hi);
	return (-1);
}

/**
 * print_array - prints array @array
 * @lo: the lower index
 * @hi: the higher index
 * @array: the array to print
 */

void print_array(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
		if (i != lo)
			printf(", %d", array[i]);
		else
			printf("%d", array[i]);
	printf("\n");
}
