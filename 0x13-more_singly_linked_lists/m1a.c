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
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    listint_t *head;

		    listint_t *node;




			 node = add_nodeint(&head, 0);

										        node->next = add_nodeint(&head, 98);

												    print_listint_safe(head);

												        return (0);

}
