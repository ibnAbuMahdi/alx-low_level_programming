#include "main.h"

/**
 * array_range - creates an int array with elements from min to max
 * @min: the first and minimum member of the array
 * @max: the last and maximum member of the array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (!a)
		return (NULL);
	for (i = min; i <= max; i++)
		a[i] = i;
	return (a);
}
