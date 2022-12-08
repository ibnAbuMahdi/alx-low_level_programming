#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of linked list
 * @head: pointer to a node pointer
 * @n: the n member of the node
 * Return: pointer to the added node;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	if (head)
	{
		listint_t *temp1 = *head;

		if (*head)
		{
			while (temp1->next)
				temp1 = temp1->next;
		}
		temp = malloc(sizeof(listint_t));
		if (temp)
		{
			temp->next = NULL;
			temp->n = n;
			if (temp1)
				temp1->next = temp;
			else
				*head = temp;
		}
	}
	return (temp);
}



