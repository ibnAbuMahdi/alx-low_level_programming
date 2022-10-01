#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of two nums
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
