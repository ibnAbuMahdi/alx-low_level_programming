#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the index of the first element
 *  for which cmp does not return 0
 * @array: the array to search
 * @size: array size
 * @cmp: pointer to the function to compare values
 * Return: returns index as int of the first valid element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (cmp && array)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
