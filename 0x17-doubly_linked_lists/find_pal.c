#include "pal.h"
#include <stdio.h>
#include <math.h>

int main(void)
{
	int j, i = 100, pal = 0, prod;

	for (; i < 999; i++)
	{
		for (j = 100; j <= i; j++)
		{
			prod = j * i;
			if (is_palindrome(prod) && prod > pal)
				pal = prod;
		}
	}
	
	printf("%d\n", pal);

	return (1);
}

/**
 * _strlen_recursion - find length of string recursively
 * @s: the string
 * Return: the length as int
 */

int _strlen_recursion(int s)
{
	if (s / 10 == 0)
		return (1);
	else
		return (1 + _strlen_recursion(s / 10));
}

/**
 * is_palindrome - check if s is palindrome
 * @s: the string
 * Return: 1 or 0
 */

int is_palindrome(int s)
{
	int len = _strlen_recursion(s);

	if (len == 1 || len == 0)
		return (1);
	return (compare(s, 0, len - 1));
}

/**
 * compare - compare string i with f
 * @s: the string
 * @i: starting point
 * @f: stopping point
 * Return: 1 or 0
 */

int compare(int s, int i, int f)
{
	if (i == f)
		return (1);
	if (i == f - 1)
		return (_get(s, i) == _get(s, f));
	if (_get(s, i) != _get(s, f))
		return (0);
	return (compare(s, i + 1, f - 1));
}

int _get(int s, int i)
{
	int pw = (int) _pow_recursion(10, i);
	return ((s / pw) % 10);		
}



