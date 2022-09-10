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
	char c = 'a';

	while (c != 'Z' + 1)
	{
		putchar(c);
		c = c + 1;
		if (c == 'z' + 0)
		{
			putchar(c);
			c = 'A' + 0;
		}
		if (c == 'Z' + 1)
		{
			putchar('\n' + 0);
		}
	}
	return (0);
}
