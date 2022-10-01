#include <stdio.h>
#include <stdlib.h>
/**
 * main - add and prints its arguments
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0
 */

int main(int argc, char **argv)
{
	char **end;
	long int sum = 0;
	long int num;
	int i;
	char *p = "";

	end = &p;
	if (argc < 2)
		printf("%d\n", 0);
	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], end, 10);
		if (**end == 0 && num >= 0)
		{
			sum = sum + num;
		}
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%ld\n", sum);
	return (0);
}
