#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - get node at index
 * @head: pointer to the head node
 * @index: index
 * @i: i member
 * Return: pointer to the found node or NULL if not found
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int i)
{
	unsigned int j = 0;
	listint_t *temp = NULL;

	if (head)
	{
		temp = malloc(sizeof(listint_t));
		if (!temp)
			return (NULL);
		temp = *head;

		while (temp)
		{
			if (index > 0 && j == index - 1)
			{
				listint_t *temp1 = malloc(sizeof(listint_t));

				if (!temp1)
					return (NULL);
				temp1->n = i;
				temp1->next = temp->next;
				temp->next = temp1;
				return (temp1);
			}
			else if (index == 0 && j == 0)
			{
				listint_t *temp1 = malloc(sizeof(listint_t));

				if (!temp1)
					return (NULL);
				(*head) = temp1;
				temp1->n = i;
				temp1->next = temp;
				return (temp1);
			}
			j++;
			temp = temp->next;
		}
	}
	return (NULL);
}
