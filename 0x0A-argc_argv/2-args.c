#include <stdio.h>

/**
 * main - prints the arguments
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0
 */

int main(int argc, int *argv)
{
	/**
	 * @i: counter
	 */
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
