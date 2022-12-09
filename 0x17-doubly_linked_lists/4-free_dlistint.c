#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_dlistint - frees the linked list
 * @h: pointer to the head node
 */

void free_dlistint(dlistint_t *h)
{
	dlistint_t *temp;

	if (h)
	{
		if (h->next)
			while (h->next)
			{
				temp = h->next;
				free(h);
				h = temp;

			}
		else if (h->prev)
			while (h->prev)
			{
				temp = h->prev;
				free(h);
				h = temp;
			}
	}
	free(h);
}
