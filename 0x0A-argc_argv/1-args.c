#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	if (**argv != 0)
		printf("%d\n", argc - 1);
	return (0);
}
