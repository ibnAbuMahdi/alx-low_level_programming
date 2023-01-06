#include "hash_tables.h"

/**
 * hash_table_get - gets a value from @h using key @key
 * @ht: the hash table
 * @key: the key
 * Return: the value or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[idx];
	if (!temp)
		return (NULL);
	while (temp && strcmp(key, temp->key) != 0)
		temp = temp->next;
	if (!temp)
		return (NULL);
	return (temp->value);
}
