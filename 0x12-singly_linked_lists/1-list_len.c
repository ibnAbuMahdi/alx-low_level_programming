#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements
 * in a singly linked list
 * @h: pointer to the head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	list_t *temp = (list_t *) h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}

	return (i);
}
