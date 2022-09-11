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
	for (int c = '0'; c < '9' + 1; c++)
	{
		for (int b = '0'; b < '9' + 1; b++)
		{
			for (int a = '0'; a < '9' + 1; a++)
			{
				for (int d = '1'; d < '9' + 1; d++)
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
	}
	return (0);
}
