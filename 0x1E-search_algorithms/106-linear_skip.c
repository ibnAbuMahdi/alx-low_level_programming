#include "search_algos.h"

/**
 * linear_skip - searches a sorted skip list @list
 * @list: the skip list
 * @value: the value to search
 * Return: the node if found or NULL o.w.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = list, *temp1;

	if (!list)
		return (NULL);

	while (temp->next && temp->n < value)
	{
		if (temp->express)
		{
			temp1 = temp;
			temp = temp->express;
			print_val_s(temp);
		}
		else
		{
			temp = temp->next;
		}
	}
	if (!temp->next)
		temp1 = temp1->express;
	printf("Value found between indexes [%lu] and [%lu]\n",
			temp1->index, temp->index);
	while (temp1 && print_val_s(temp1) && temp1->n < value)
		temp1 = temp1->next;
	if (temp1 && temp1->n == value)
		return (temp1);
	else
		return (NULL);
}

/**
 * print_val_s - prints index and value
 * @list: the index
 * Return: 1 always
 */

int print_val_s(skiplist_t *list)
{
	printf("Value checked array[%lu] = [%d]\n", list->index, list->n);
	return (1);
}
