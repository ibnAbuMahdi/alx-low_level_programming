#include <stdio.h>

/**
 * main - the entry point
 * Description: prints the alphabets in lower case
 * Return: always returns 0
 */
int main(void)
{
	/*
	 *@c: is a character variable
	 */
	int c = '0';

	while (c < '9' + 1)
	{
		/**
		 * @b: integer for the second loop
		 */
		int b = '0';

		while (b < '9' + 1)
		{
			if (c != b && c < b)
			{
				putchar(c);
				putchar(b);
				if (c != '8' || b != '9')
				{
					putchar(',');
					putchar(' ');
				}
				if (c == '8' && b == '9')
				{
					putchar('\n');
				}
			}
			b = b + 1;
		}
		c = c + 1;
	}
	return (0);
}
