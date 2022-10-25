#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint - frees the linked list
 * @h: pointer to the head node
 */

void free_listint(listint_t *h)
{
	if (h)
	{
		if (h->next)
			free_listint(h->next);
		free(h);
	}
}
