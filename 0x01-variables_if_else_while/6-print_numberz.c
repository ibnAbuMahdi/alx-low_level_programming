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
		putchar(c);
		c = c + 1;
		if (c == '9' + 1)
		{
			putchar('\n');
		}
	}
	return (0);
}
