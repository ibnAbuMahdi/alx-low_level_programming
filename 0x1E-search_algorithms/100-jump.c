#include "search_algos.h"

/**
 * jump_search - searches array @array using jump search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @val: the value to search
 * Return: the index of @val if found and -1 o.w.
 */

int jump_search(int *array, size_t size, int val)
{
	size_t m, i;

	if (!array)
		return (-1);
	m = (size_t) sqrt((double) size);
	i = 0;

	while (print_val(i, array[i]) && ((m < size && array[m] < val)
			       || array[size - 1] < val))
	{
		i = m;
		m = m + (size_t) sqrt((double) size);
		if (i >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					i - (m - i), m - (m - i));
			return (-1);
		}
	}

	if (m < size)
		printf("Value found between indexes [%lu] and [%lu]\n", i, m);

	while (print_val(i, array[i]) && (array[i] < val))
	{
		i++;
		if (i == m + 1 || i == size)
		{
			return (-1);
		}
	}

	if (array[i] == val)
		return (i);
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
