#include "main.h"

/**
 * _atoi - extracts number from string
 * @s: the character string
 * Return: the extracted integer number
 */

int _atoi(char *s)
{
	/**
	 * @i: loop counter
	 * @n: extracted integer number
	 * @d: digit placeholder
	 * @neg: negative determinant
	 * @st: stop indicator
	 */
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
			if (neg < 0 && n > 0)
				n = neg * n * 10 + neg * d;
			else if (neg < 0 && n < 0)
				n = n * 10 + neg * d;
			else
				n = n * 10 + d;
		}
		else if (st == 1)
		{
			st = 2;
		}
		i++;
	}
	return (n);
}
