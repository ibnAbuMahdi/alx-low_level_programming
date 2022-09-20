#include "main.h"
#include <stdio.h>

int test(char *s)
{
	int i = 0;
	int n = 0;
	int d;
	int neg = 1;
	int st = 0;

	while (*(s + i) > 0 && st < 2)
	{
		if (*(s + i) == '-')
		{
			neg = neg * -1;
		}
		else if (*(s + i) > 47 && *(s + i) < 58)
		{
			st = 1;
			d = *(s + i) - 48;
			n = n * 10 + d;
		}
		else if (st == 1)
		{
			st = 2;
		}

		i++;
	}

	return (n * neg);
}

int main(void)
{
	printf("%d\n", test("+--+-20345gg  9"));
	return (0);
}

