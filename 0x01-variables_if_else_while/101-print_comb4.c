#include <stdio.h>

/**
 * main - the entry point
 * Description: prints the alphabets in lower case
 * Return: always returns 0
 */
int main(void)
{
	/*
	 * @c: is a character variable
	 * @b: integer for the second loop
	 * @a: integer for the third loop
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
				if (c < b &&  b < a)
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
			}
		}
	}
	return (0);
}
