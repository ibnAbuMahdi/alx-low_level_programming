#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a node to a linked list
 * @head: pointer to a node pointer
 * @n: the int n member of the node
 * Return: pointer to the added node;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	if (head)
	{
		temp = malloc(sizeof(listint_t));
		if (!temp)
			return (NULL);
		temp->next = *head;
		temp->n = n;
		*head = temp;
	}
	return (temp);
}



