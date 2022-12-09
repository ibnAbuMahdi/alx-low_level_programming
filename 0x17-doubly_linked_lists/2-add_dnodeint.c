#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to a linked list
 * @head: pointer to a node pointer
 * @n: the int n member of the node
 * Return: pointer to the added node;
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	if (head)
	{
		temp = malloc(sizeof(dlistint_t));
		if (!temp)
			return (NULL);
		temp->next = *head;
		temp->prev = NULL;
		temp->n = n;
		*head = temp;
	}
	return (temp);
}



