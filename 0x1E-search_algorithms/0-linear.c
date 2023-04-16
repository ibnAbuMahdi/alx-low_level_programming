#include "search_algos.h"

/**
 * linear_search - searches array @array linearly for @val
 * @array: the array to search
 * @size: the size of the array
 * @val: the value to search
 * Return: the index of @val if found and -1 o.w.
 */

int linear_search(int *array, size_t size, int val)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (val == array[i])
			return ((int) i);
		i++;
	}
	return (-1);
}
