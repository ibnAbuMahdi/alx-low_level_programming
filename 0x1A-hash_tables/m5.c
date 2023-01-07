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

	    hash_table_t *ht;



	        ht = hash_table_create(1024);

		    hash_table_print(ht);

		        hash_table_set(ht, "c", "fun");

			    hash_table_set(ht, "python", "awesome");

			        hash_table_set(ht, "Bob", "and Kris love asm");

				    hash_table_set(ht, "N", "queens");

				        hash_table_set(ht, "Asterix", "Obelix");

					    hash_table_set(ht, "Betty", "Cool");

					        hash_table_set(ht, "98", "Battery Street");

						    hash_table_print(ht);

	printf("Bob: %lu\n", key_index((const unsigned char *) "Bob", 1024));
     printf("98: %lu\n", key_index((const unsigned char *) "98", 1024));
	printf("c: %lu\n", key_index((const unsigned char *) "c", 1024));    
       printf("python: %lu\n", key_index((const unsigned char *) "python", 1024));	
       printf("Betty: %lu\n", key_index((const unsigned char *) "Betty", 1024));
						    return (EXIT_SUCCESS);

}
