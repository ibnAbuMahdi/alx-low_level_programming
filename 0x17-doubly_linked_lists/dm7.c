#include <stdlib.h>

#include <string.h>

#include <stdio.h>

#include "lists.h"



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

	    dlistint_t *head;



	        head = NULL;

		insert_dnodeint_at_index(&head, 0, 4096);
		printf("%p\n", (void *) head);
	        print_dlistint(head);
		free_dlistint(head);
	        head = NULL;

									    return (EXIT_SUCCESS);

}
