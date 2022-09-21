#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Return: always zero
 */

int main(void)
{
	/**
	 * @i: loop counter
	 * @pass: the 12 char password
	 * @sum: the sum
	 * @n: the number
	 */

	srand((unsigned int)(time(NULL)));
	int i;
	char pass[100];
	int sum;
	int n;

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
