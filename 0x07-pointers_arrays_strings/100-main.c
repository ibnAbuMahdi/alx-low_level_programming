#include "main.h"

#include <stdio.h>

#include <stddef.h>

/**
 *
 *  * simple_print_buffer - prints buffer in hexa
 *
 *   * @buffer: the address of memory to print
 *
 *    * @size: the size of the memory to print
 *
 *     *
 *
 *      * Return: Nothing.
 *
 *       */

int main(void)
{
	char *s0 = "Bob Dylan";

	    char *s1 = "Robert Allen";



	        printf("%s, %s\n", s0, s1);

		    set_string(&s1, s0);

		        printf("%s, %s\n", s0, s1);

			    return (0);		
}

