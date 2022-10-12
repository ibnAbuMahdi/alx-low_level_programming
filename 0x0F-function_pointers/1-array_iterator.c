#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - apply a function to members of array
 * @array: the array
 * @size: array's size
 * @action: the function to execute on the array elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
