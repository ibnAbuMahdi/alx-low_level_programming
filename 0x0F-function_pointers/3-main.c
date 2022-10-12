#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - code driver
 * @ac: number of args
 * @av: the args
 * Return: 0
 */

int main(int ac, char **av)
{
	int res, a, b;
	op_t opr;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(av[2]) != 1 || (av[2][0] != '+' && av[2][0]
		 != '-' && av[2][0] != '*' && av[2][0] != '/' && av[2][0] != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if (atoi(av[3]) == 0 && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);

	opr.f = get_op_func(av[2]);
	res = opr.f(a, b);
	printf("%d\n", res);
	return (0);
}
