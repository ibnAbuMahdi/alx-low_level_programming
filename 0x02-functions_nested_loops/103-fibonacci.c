#include <stdio.h>

/**
 * main - program entry point
 * Return: always 0
 */
int main(void)
{
	/**
	 * @T: Grand total
	 * @n1: first int
	 * @n2: second int
	 * @sum: sum of n1 and n2
	 */
	long int T;
	long int n1 = 1;
	long int n2 = 2;
	long int sum;

	while (n1 < 4000001)
	{
		if ((n1 % 2) == 0)
		{
			T = T + n1;
		}
		sum = n2 + n1;
		n1 = n2;
		n2 = sum;
	}
	printf("%ld\n", T);
	return (0);
}
