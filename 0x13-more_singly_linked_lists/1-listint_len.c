#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * listint_len - counts the number of elements in a listint_t list
 * @h: head node of the list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	listint_t *temp = (listint_t *) h;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

