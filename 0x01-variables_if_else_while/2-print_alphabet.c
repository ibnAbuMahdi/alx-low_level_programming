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

	while (c != 'z')
	{
		putchar("%c", (int)c);
		c = c + 1;
		if (c == 'z')
		{
			putchar("%c\n", (int)c);
		}
	}
	return (0);
}
