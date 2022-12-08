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
	listint_t *slow_p = (listint_t *) h, *fast_p = (listint_t *) h;

	if (!h)
		return (0);

	while (slow_p && fast_p && fast_p->next)
	{
		if (fast_p->next == slow_p)
		{
			printf("-> [%p] %d\n", (void *)slow_p, slow_p->n);
			return (i);
		}
		i++;
		printf("[%p] %d\n", (void *)slow_p, slow_p->n);
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
	}
	return (i);
}
