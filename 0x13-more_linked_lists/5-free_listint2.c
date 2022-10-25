#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - frees the linked list
 * @h: pointer to the head node
 */

void free_listint2(listint_t **h)
{
	listint_t *temp = NULL;

	if (h)
	{
		temp = *h;
		*h = NULL;
		if (temp)
			free_listint(temp);
	}
}


/**
 * free_listint - frees the list
 * @h: the head node pointer
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
