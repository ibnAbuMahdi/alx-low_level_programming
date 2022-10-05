#include <stdio.h>
#include <limits.h>
#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 */

int main(int argc, char **argv)
{
	/**
	 *
	 */
	int num;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (0);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("%d\n", mincoins(coins, num));
	return (0);
}

/**
 *
 */

int mincoins(int *coins, int num)
{
	/**
	 * @i:
	 */
	int i;
	int *change;

	change = malloc(sizeof(int) * (num + 1));
	if(!change)
		return (0);
	for(i = 1; i <= num; i++)
		change[i] = INT_MAX;
	change[0] = 0;
	
	for (i = 1; i <= num; i++)
	{
		int j;

		for (j = 0; j < 5; j++)
		{
			if (coins[j] <= i)
			{
				int sub_res = change[i - coins[j]];

				if (sub_res != INT_MAX && sub_res + 1 < change[i])
					change[i] = sub_res + 1;
			}
		}
	}
	if (change[num] == INT_MAX)
	{
		return (1);
	}
	else
	{
		return (change[num]);
	}
}
