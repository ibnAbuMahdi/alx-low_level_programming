#include <stdio.h>

/**
 * main - program that finds the largest prime factor
 * Return: the largest prime factor
 */

int main(void)
{
	/**
	 * @n: the number whose largest prime factor is required
	 * @l: the largest prime factor
	 */
	unsigned long n = 612852475143;
	unsigned long l = 0;

	while (n != 1)
	{
		unsigned long i = 2;

		for (; i < n + 1; i++)
		{
			if (n % i == 0)
			{
				if (i > l)
					l = i;
				n = n / i;
				break;
			}
		}
	}
	printf("%lu\n", l);
	return (0);
}
