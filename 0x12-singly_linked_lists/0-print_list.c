#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - print singly linked list
 * @h: pointer to the head node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	list_t *temp = (list_t *) h;

	while (temp)
	{
		if (!temp->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}

	return (i);
}
