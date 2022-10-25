#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_listint - get node at index
 * @head: pointer to the head node
 * Return: sum of the ns of the nodes in the list
*/

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	temp = head;
	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}
	return (i);
}
