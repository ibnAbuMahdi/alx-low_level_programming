#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - the program entry point
 * Description: the program generates a random number and
 * determines whether its last digit is greater than 5,
 *  less than 6 or zero
 *  Return: it always returns zero
 */

int main(void)
{
	/**
	 * @n: this is a randomly generated integer
	 * @last_digit: the last digit of the integer @n
	 */
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater
		 than 5\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6
		 and not 0", n, last_digit);
	}

	return (0);

}
