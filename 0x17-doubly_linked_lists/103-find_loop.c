#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * find_listint_loop - find the beginning of a loop if exist
 * @h: pointer to the head node
 * Return: the pointer to the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *h)
{
	listint_t *slow_p = h, *fast_p = h;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
			return (slow_p);
	}
	return (NULL);
}
