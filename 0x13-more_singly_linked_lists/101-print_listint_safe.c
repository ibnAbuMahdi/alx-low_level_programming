#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint_safe - prints elements of a listint_t list safely
 * @h: head node of the list
 * Return: number of elements in the list
 */

size_t print_listint_safe(const listint_t *h)
{
	size_t i = 0;
	listint_t *temp = (listint_t *) h, *nhead;

	nhead = malloc(sizeof(listint_t));
	if (!nhead)
		exit(98);
	if (!h)
	{
		free(nhead);
		return (0);
	}
	while (temp)
	{
		listint_t *next = temp->next;

		i++;
		if (temp->next == nhead)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			return (i);
		}
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp->next = nhead;
		temp = next;
	}
	return (i);
}
