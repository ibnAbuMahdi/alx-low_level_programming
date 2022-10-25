#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints elements of a listint_t list
 * @h: head node of the list
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *temp = (listint_t *) h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}

