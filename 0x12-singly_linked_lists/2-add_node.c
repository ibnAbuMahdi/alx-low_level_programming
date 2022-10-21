#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to a linked list
 * @head: pointer to a node pointer
 * @str: the str member of the node
 * Return: pointer to the added node;
 */

list_t *add_node(list_t **head, const char *str)
{
	char *s;
	unsigned int i = 0;
	list_t *temp = NULL;

	if (str)
	{
		s = strdup(str);
		i = _strlen(s);
	}
	else
	{
		s = NULL;
	}
	if (head && s)
	{
		temp = malloc(sizeof(list_t));
		if (temp)
		{
			temp->next = *head;
			temp->len = i;
			temp->str = s;
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



