#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - add and prints its arguments
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	char **end;
	int sum = 0;
	int num;
	int i;
	char *p = "";

	end = &p;
	if (argc < 2)
		printf("%d\n", 0);
	for (i = 1; i < argc; i++)
	{
		num = (int) strtol(argv[i], end, 10);
		if (**end == 0 && isnum(argv[i]) == 0)
		{
			sum = sum + num;
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * isnum - check if s is a number
 * @s: the string
 * Return: 0 or 1
 */

int isnum(char *s)
{
	/**
	 *@i: counter
	 */
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] > 47 && s[i] < 58)
			i++;
		else
			return (1);
	}
	return (0);
}
