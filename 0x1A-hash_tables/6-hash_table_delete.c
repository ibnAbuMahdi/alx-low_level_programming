#include "hash_tables.h"

/**
 * hash_table_delete - deletes the entire hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht)
	{
		if (ht->array)
		{
			for (; i < ht->size; i++)
			{
				hash_node_t *head = ht->array[i];

				while (head)
				{
					hash_node_t *temp = head->next;

					free(head->key);
					free(head->value);
					free(head);

					head = temp;
				}

			}
		free(ht->array);
		}
		free(ht);
	}
}
