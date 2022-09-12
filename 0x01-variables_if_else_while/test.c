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
	 * @b: integer for the second loop
	 * @a: integer for the third loop
	 * @d: integer for the fourth loop
	 */
	for (int c = '0'; c < '2' + 1; c++)
	{
		for (int b = '0'; b < '2' + 1; b++)
		{
			for (int a = '0'; a < '2' + 1; a++)
			{
				for (int d = '0'; d < '2' + 1; d++)
				{
					if ((b < d && c <= a) || (b <= d && c < a) || (b > d && c < a))
					{
						putchar(c);
						putchar(b);
						putchar(' ');
						putchar(a);
						putchar(d);
					if (c != '2' || b != '1' || a != '2' || d != '2')
					{
						putchar(',');
						putchar(' ');
					}
					if (a == '2' && c == '2' && b == '1' && d == '2')
					{
						putchar('\n');
					}
					}
				}
			}
		}
	}
	return (0);
}
