#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point of the program
 * Description: The program produces a number and
 * determines if it is positive, negative or zero
 * Return: always returns zero
 */

int main(void)
{
		/**
		 * @n: integer number to be randomly generated
		 */
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
		return (0);

}
