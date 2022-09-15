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
	long int n1 = 1;
	long int n2 = 2;
	long int sum;

	while (c < 99)
	{
		if (n1 < 0)
			n1 = -1 * n1;
		printf("%ld, ", n1);
		sum = n2 + n1;
		n1 = n2;
		n2 = sum;
		c++;
	}
	printf("%ld\n", n1);
	return (0);
}
