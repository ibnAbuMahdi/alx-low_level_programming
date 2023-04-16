#include "search_algos.h"

/**
 * advanced_binary - binary searches array @array for first instances of @val
 * @array: the array to search
 * @size: the size of the array
 * @val: the value to search
 * Return: the index of @val if found and -1 o.w.
 */

int advanced_binary(int *array, size_t size, int val)
{
	size_t lo = 0, mid, hi;

	if (!array || size == 0)
		return (-1);
	hi = size - 1;
	mid = lo + (hi - lo) / 2;
	return (b_r(array, lo, mid, hi, val));
}

/**
 * b_r - recursive binary search
 * @array: the array to search
 * @lo: the lowest index
 * @mid: the middle index
 * @hi: the highest index
 * @val: the value to find
 * Return: the index of @val if found, -1 o.w.
 */

int b_r(int *array, size_t lo, size_t mid, size_t hi, int val)
{
	print_array(array, lo, hi);
	if (hi == lo && val != array[hi])
		return (-1);
	if (val == array[mid] && ((mid > 0 && val != array[mid - 1]) || mid == 0))
		return ((int) mid);
	if (mid > 0 && val == array[mid - 1])
		return (b_r(array, lo, lo + (mid - lo) / 2, mid, val));
	if (val > array[mid])
	{
		lo = mid + 1;
		mid = lo + (hi - lo) / 2;
		return (b_r(array, lo, mid, hi, val));
	}
	else if (val < array[mid])
	{
		mid = lo + (hi - lo) / 2;
		hi = mid == 0 ? 0 : mid - 1;
		return (b_r(array, lo, mid, hi, val));
	}
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
