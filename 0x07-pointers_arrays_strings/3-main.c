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

        unsigned int n;



	    n = _strspn("abcdef", "");

	        printf("%u\n", n);

		n = _strspn("", "abcdef");                  

		printf("%u\n", n); 

		    return (0);
}
