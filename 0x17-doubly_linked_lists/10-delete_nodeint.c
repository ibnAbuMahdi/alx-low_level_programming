#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to the head node
 * @index: index
 * Return: 1 if successful and -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = NULL;

	if (head)
	{
		temp = *head;

		while (temp)
		{
			if (index > 0 && j == index - 1)
			{
				listint_t *temp1 = NULL;

				temp1 = temp->next;
				temp->next = temp->next->next;
				free(temp1);
				return (1);
			}
			else if (index == 0 && j == 0)
			{
				(*head) = temp->next;
				free(temp);
				return (1);
			}
			j++;
			temp = temp->next;
		}
	}
	return (-1);
}
