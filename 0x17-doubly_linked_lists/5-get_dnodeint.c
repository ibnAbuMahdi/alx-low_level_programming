#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to the head node
 * @index: index
 * Return: pointer to the found node or NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = NULL;

	if (head)
	{
		temp = malloc(sizeof(dlistint_t));
		temp = head;
		while (temp)
		{
			if (i == index)
				return (temp);
			i++;
			temp = temp->next;
		}
	}
	return (NULL);
}
