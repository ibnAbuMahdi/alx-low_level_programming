#include "hash_tables.h"

/**
 * hash_table_print - prints the entire hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, start = 0;

	if (ht)
	{
		if (ht->array)
		{
			printf("{");
			for (; i < ht->size; i++)
			{
				hash_node_t *temp = ht->array[i];

				while (temp)
				{
					if (start)
					{
						printf(", '%s':'%s'", temp->key, temp->value);
					}
					else
					{
						printf("'%s':'%s'", temp->key, temp->value);
						start = 1;
					}
					temp = temp->next;
				}

			}
			printf("}\n");
		}
	}

}
