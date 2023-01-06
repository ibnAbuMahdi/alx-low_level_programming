#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a NULL-filled hash table
 * @size: table's size
 * Return: the pointer to the table or NULL if failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	for (; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
