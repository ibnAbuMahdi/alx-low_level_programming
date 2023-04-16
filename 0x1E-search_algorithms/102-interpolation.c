#include "search_algos.h"

/**
 * interpolation_search - searches array @array using interpolation
 * search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @val: the value to search
 * Return: the index of @val if found and -1 o.w.
 */

int interpolation_search(int *array, size_t size, int val)
{
	size_t m, hi, lo;

	if (!array)
		return (-1);
	lo = 0;
	hi = size - 1;

	while ((array[hi] != array[lo]) && (val >= array[lo]) && (lo < hi))
	{
		m = lo + (((double)(hi - lo) / (array[hi] - array[lo]))
				* (val - array[lo]));

		if (m > hi)
		{
			printf("Value checked array[%ld] is out of range\n", m);
			return (-1);
		}
		print_val(m, array[m]);

		if (array[m] < val)
			lo = m + 1;
		else if (val < array[m])
			hi = m - 1;
		else
			return (m);
	}

	if (array[lo] == val)
		return (lo);
	else
		return (-1);
}

/**
 * print_val - prints index and value
 * @i: the index
 * @val: the value
 * Return: 1 always
 */

int print_val(size_t i, int val)
{
	printf("Value checked array[%lu] = [%d]\n", i, val);
	return (1);
}
