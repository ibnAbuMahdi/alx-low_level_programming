#include <stdio.h>
#include <stdlib.h>

/**
 *
 */

int main(int ac, char **av)
{
	int i, r, k, sz = 10;
	int nums[10];
	char list[10][3] = {"OG\0", "OO\0", "HO\0", "KF\0", "RO\0", "CU\0", "CL\0", "RM\0", "SN\0", "00\0"};

	nums[0] = -1;
	if (ac != 2)
	{
		printf("Please provide a number as the seed\n");
		return (0);
	}

	srand(atoi(av[1]));
	for (i = 0; i < sz; i++)
	{
		r = rand() % 10;
		k = 0;
		while (k <= i)
		{
			if (r == nums[k])
			{
				r = rand() % 10;
				k = 0;
			}
			else
			{
				k++;
			}

		}
		nums[i] = r;
		if (i < 9)
			nums[i + 1] = -1;
	}

	for (i = 0; i < sz; i += 2)
		printf("%d - %s and %s\n", i/2 + 1, list[nums[i]], list[nums[i + 1]]);
	return (0);
}
