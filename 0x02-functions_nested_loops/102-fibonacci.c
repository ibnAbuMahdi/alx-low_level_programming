#include <stdio.h>

/**
 * main - program entry point
 * Return: always 0
 */
int main(void)
{
	/**
	 * @c: loop counter
	 * @n1: first int
	 * @n2: second int
	 * @sum: sum of n1 and n2
	 */
	int c = 2;
	int n1 = 1;
	int n2 = 2;
	int sum;

	while (c < 51)
	{
		printf("%d, ", n1);
		sum = n2 + n1;
		n1 = n2;
		n2 = sum;
		c++;
	}
	printf("%d", n2);
	return (0);
}
