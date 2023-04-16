#include "search_algos.h"

/**
 * jump_list - searches a list using jump algorithm
 * @list: the list to search
 * @size: the size of the array
 * @val: the value to search
 * Return: the index of @val if found and -1 o.w.
 */

listint_t *jump_list(listint_t *list, size_t size, int val)
{
	size_t m, i;
	listint_t *temp = list, *temp1;

	if (!list)
		return (NULL);
	m = (size_t) sqrt((double) size);
	i = 0;
	while (temp && ((i < size && temp->n < val)))
	{
		size_t k = 0;

		temp1 = temp;
		for (; temp->next && k < m; k++)
			temp = temp->next;
		print_val_l(temp);
		i = i + m;
		if (i >= size)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			temp1->index, temp->index);

	while (temp1 && print_val_l(temp1) && (temp1->n < val))
		temp1 = temp1->next;

	if (temp1 && temp1->n == val)
		return (temp1);
	else
		return (NULL);
}

/**
 * print_val_l - prints index and value
 * @list: the index
 * Return: 1 always
 */

int print_val_l(listint_t *list)
{
	printf("Value checked array[%lu] = [%d]\n", list->index, list->n);
	return (1);
}
