#include <stdio.h>

/**
 * main - the entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
