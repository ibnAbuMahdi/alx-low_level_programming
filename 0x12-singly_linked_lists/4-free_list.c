#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - frees the linked list
 * @h: pointer to the head node
 */

void free_list(list_t *h)
{
	if (h)
	{
		if (h->next)
			free_list(h->next);
		free(h->str);
		free(h);
	}
}
