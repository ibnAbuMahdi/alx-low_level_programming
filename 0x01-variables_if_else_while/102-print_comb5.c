#include <stdio.h>

/**
 * main - the entry point
 * Description: prints the alphabets in lower case
 * Return: always returns 0
 */
int main(void)
{
	/**
	 * @c: is a character variable
	 */
	int c = '0';

	for (; c < '9' + 1; c++)
	{
		int b = '0';

		for (; b < '9' + 1; b++)
		{
			int a = '0';

			for (; a < '9' + 1; a++)
			{
				int d = '1';

				for (; d < '9' + 1; d++)
				{
					if (b < d && c <= a)
					{
						putchar(c);
						putchar(b);
						putchar(' ');
						putchar(a);
						putchar(d);
					if (c != '9' || b != '8' || a != '9' || d != '9')
					{
						putchar(',');
						putchar(' ');
					}
					if (a == '9' && c == '9' && b == '8' && d == '9')
					{
						putchar('\n');
					}
					}
				}
			}
		}
	} return (0);
}
