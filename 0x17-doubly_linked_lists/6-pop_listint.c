#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - pops the head node
 * @head: pointer to the head node
 * Return: n member of the node
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *temp = NULL;

	if (head)
	{
		if (*head)
		{
			temp = *head;
			i = temp->n;
			*head = temp->next;
			free(temp);

		}
	}
	return (i);
}
