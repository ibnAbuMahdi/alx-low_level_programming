#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to the head node
 * @index: index
 * Return: 1 if successful and -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int j = 0;
	dlistint_t *temp = NULL;

	if (head)
	{
		temp = *head;

		while (temp)
		{
			if (index > 0 && j == index - 1)
			{
				dlistint_t *temp1 = NULL;

				temp1 = temp->next;
				temp->next = temp->next->next;
				if (temp->next)
					temp->next->prev = temp;
				free(temp1);
				return (1);
			}
			else if (index == 0 && j == 0)
			{
				(*head) = temp->next;
				if (*head)
					(*head)->prev = NULL;
				free(temp);
				return (1);
			}
			j++;
			temp = temp->next;
		}
	}
	if (!head && !index)
		return (1);
	return (-1);
}
