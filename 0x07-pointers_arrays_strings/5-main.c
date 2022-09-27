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
char *s = "hello, world";

    char *f = "world";

        char *t;



	    t = _strstr(s, f);

	        printf("%s\n", t);

		    return (0);
}
