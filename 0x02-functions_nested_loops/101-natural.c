#include <stdio.h>
/**
 * main - the entry point
 */
void main(void)
{
	/**
	 * @sum: sum of the numbers divisible by 3 or 5
	 * @i: loop counter and number generator
	 */
	int sum = 0;
	int i = 0;

	for (; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
