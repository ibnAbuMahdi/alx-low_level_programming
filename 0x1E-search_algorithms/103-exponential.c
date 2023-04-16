#include "search_algos.h"

/**
 * exponential_search - searcheds array using exponential algorithm
 * @array: the array to search
 * @size: the array size
 * @val: the value to search
 * Return: the index of @val if found, -1 o.w.
 */

int exponential_search(int *array, size_t size, int val)
{
	size_t b = 1;

	if (!array || size == 0)
		return (-1);
	while (b < size && array[b] < val)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		b *= 2;
	}
	if (b  < size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", b / 2, b);
		return (binary_search_e(array, b / 2, b, val));
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", b / 2, size - 1);
		return (binary_search_e(array, b / 2, size - 1, val));
	}
}
/**
 * binary_search_e - binary searches array @array for @val
 * @array: the array to search
 * @lo: the lowest index of the array
 * @hi: the highest index of the array
 * @val: the value to search
 * Return: the index of @val if found and -1 o.w.
 */

int binary_search_e(int *array, size_t lo, size_t hi, int val)
{
	size_t mid;

	if (!array)
		return (-1);

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
