#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_dlistint - get node at index
 * @head: pointer to the head node
 * Return: sum of the ns of the nodes in the list
*/

int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	temp = head;
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
