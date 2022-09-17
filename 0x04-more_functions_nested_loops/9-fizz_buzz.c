#include <stdio.h>

/**
 * main - famous FizzBuzz program for 100
 * Return: always 0
 */

int main(void)
{
	/**
	 * @c: the number
	 */
	int c = 1;

	for (; c < 101; c++)
	{
		if (c % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (c % 3 == 0)
		{
			printf("Fizz");
		}
		else if (c % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", c);
		}
		if (c != 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
