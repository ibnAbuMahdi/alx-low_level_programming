#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

/**
 * insert_dnodeint_at_index - get node at index
 * @head: pointer to the head node
 * @index: index
 * @i: i member
 * Return: pointer to the found node or NULL if not found
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index, int i)
{
	unsigned int j = 0;
	dlistint_t *temp = NULL;

	temp = malloc(sizeof(dlistint_t));
	if (i > INT_MAX || i < INT_MIN || !temp)
		return (NULL);
	if (head)
	{
		temp = *head;
		while (temp)
		{
			dlistint_t *temp1 = malloc(sizeof(dlistint_t));
	
			if (!temp1)
				return (NULL);
			if (index > 0 && j == index - 1)
			{
				temp1->n = i;
				temp1->next = temp->next;
				temp->next->prev = temp1;
				temp1->prev = temp;
				temp->next = temp1;
				return (temp1);
			}
			else if (index == 0 && j == 0)
			{
				(*head) = temp1;
				temp1->n = i;
				temp1->prev = NULL;
				if (temp)
					temp->prev = temp1;
				temp1->next = temp;
				return (temp1);
			}
			j++;
			temp = temp->next;
			free(temp1);
		}
	}
	return (NULL);
}

/**
 * add_nodeint - adds a node to a linked list
 * @head: pointer to a node pointer
 * @n: the int n member of the node
 * Return: pointer to the added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	if (head)
	{
		temp = malloc(sizeof(listint_t));
		if (!temp)
			return (NULL);
		temp->next = NULL;
		temp->n = n;
		*head = temp;
	}
	return (*head);
}
