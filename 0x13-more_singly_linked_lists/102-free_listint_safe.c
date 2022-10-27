#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint_safe - frees the linked list safely
 * @h: pointer to the head node's pointer
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *temp = NULL, *dummy;

	dummy = malloc(sizeof(listint_t));
	if (h)
	{
		temp = *h;
		*h = NULL;
		if (temp)
			i = free_listint1_safe(temp, dummy);
	}
	return (i);
}


/**
 * free_listint1_safe - frees the list
 * @h: the head node pointer
 * @dummy: dummy node
 * Return: size of list that was freed
 */

size_t free_listint1_safe(listint_t *h, listint_t *dummy)
{
	size_t i = 1;

	if (h)
	{
		listint_t *next = h->next;

		if (h->next == dummy)
			return (0);
		if (h->next)
		{
			h->next = dummy;
			i += free_listint1_safe(next, dummy);
		}
		free(h);
	}
	return (i);
}
