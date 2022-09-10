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
			if (c < b)
			{
				/**
				* @a: integer for the third loop
				*/
				int a = '0';

				while (a < '9' + 1)
				{
					if (b < a)
					{
						putchar(c);
						putchar(b);
						putchar(a);
						if (c != '7' || b != '8' || a != '9')
						{
							putchar(',');
							putchar(' ');
						}
						if (a == '9' && c == '7' && b == '8')
						{
							putchar('\n');
						}
					}
					a = a + 1;
				}
			}
			b = b + 1;
		}
		c = c + 1;
	}
	return (0);
}
