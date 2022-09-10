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

	while (c != 'z' + 1)
	{
		if (c != 'q' + 0 && c != 'e' + 0)
		{
			putchar(c);
		}
		c = c + 1;
		if (c == 'z' + 1)
		{
			putchar('\n' + 0);
		}
	}
	return (0);
}
