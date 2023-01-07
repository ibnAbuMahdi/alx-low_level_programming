#include "hash_tables.h"

/**
 * hash_table_set - sets a node in the hashtable @ht with value
 * @value and key @key
 * @ht: the hash table to update
 * @key: the key
 * @value: the value
 * Return: 1 on success and 0 o.w.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || ht->size == 0 || !(ht->array))
		return (0);

	if (!key || !value || strlen(key) == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	node->value = strdup(value);
	if (!(node->value))
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->next = NULL;
	if (insert_node(ht, node, index))
		return (1);
	return (0);
}

/**
 * insert_node - inserts a node @node in hash table @ht at position @index
 * @ht: the hash table
 * @node: the node to add
 * @index: the position in the table @ht array
 * Return: 1 on success and 0 o.w.
 */

int insert_node(hash_table_t *ht, hash_node_t *node, unsigned long int index)
{
	hash_node_t *head;

	if (!ht)
	{
		free(node->value);
		free(node);
		return (0);
	}
	head = ht->array[index];
	if (!head)
	{
		ht->array[index] = node;
	}
	else
	{
		hash_node_t *temp = head;

		while (temp)
		{
			if (strcmp(node->key, temp->key) == 0)
			{
				free(temp->value);
				temp->value = strdup(node->value);
				free(node->value);
				free(node->key);
				free(node);
				return (1);
			}
			temp = temp->next;
		}
		node->next = head;
		head = node;
		ht->array[index] = head;
	}
	return (1);
}
