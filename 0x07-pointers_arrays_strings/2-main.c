#include "main.h"

#include <stdio.h>



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
 char *s = "hello";

     char *f;



         f = _strchr(s, 'l');



	     if (f != NULL)

		         {

				         printf("%s\n", f);

					     }

	         return (0);
}
