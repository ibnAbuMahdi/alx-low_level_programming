#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "hash_tables.h"



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always EXIT_SUCCESS.
 *
 *     */

int main(void)

{
	unsigned long int dx;
	    hash_table_t *ht;



	        ht = hash_table_create(1024);

		    hash_table_set(ht, "joyful", "cool");
		    hash_table_set(ht, "synaphea", "drink");
			dx = key_index((unsigned char *) "joyful", 1024);
			printf("%s\n", ht->array[dx]->next->value);
		        return (EXIT_SUCCESS);

}
