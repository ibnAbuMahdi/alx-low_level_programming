#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * reverse_listint - reverse elements of a listint_t list
 * @h: head node of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **h)
{
	listint_t *temp = *h, *s = NULL;

	if (!temp)
		return (NULL);
	while (temp->next)
	{
		temp = (*h)->next;
		(*h)->next = s;
		s = *h;
		*h = temp;
	}
	(*h)->next = s;
	return (*h);
}

