#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node to the end of linked list
 * @head: pointer to a node pointer
 * @str: the str member of the node
 * Return: pointer to the added node;
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	unsigned int i = 0;
	list_t *temp = NULL;

	if (str)
	{
		s = strdup(str);
		if (!s)
			return (NULL);
		i = _strlen(s);
	}
	else
	{
		s = NULL;
	}

	if (head)
	{
		list_t *temp1 = *head;

		if (*head)
		{
			while (temp1->next)
				temp1 = temp1->next;
		}
		temp = malloc(sizeof(list_t));
		if (temp)
		{
			temp->next = NULL;
			temp->len = i;
			temp->str = s;
			if (temp1)
				temp1->next = temp;
			else
				*head = temp;
		}
	}
	return (temp);
}

/**
 * _strlen - counts the length of a string
 * @s: the string to be counted
 * Return: the length as unsigned int
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}



