#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to the head node
 * @index: index
 * Return: pointer to the found node or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL;

	if (head)
	{
		temp = malloc(sizeof(listint_t));
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
