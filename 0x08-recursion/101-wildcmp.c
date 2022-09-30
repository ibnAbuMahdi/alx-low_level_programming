#include "main.h"

/**
 * _strlen_recursion - find length of string recursively
 * @s: the string
 * Return: the length as int
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * wildcmp - compares s1 and s2 wildly
 * @s1: first string
 * @s2: second string
 * Return: 1 if true, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	int a = _strlen_recursion(s1);
	int b = _strlen_recursion(s2);

	if (s1[a - 1] == s2[b - 1] || s2[b - 1] == '*')
		return (wild(s1, s2));
	return (0);
}

/**
 * wild - check if sr and de compares
 * @sr: first string
 * @de: second string
 * Return: 1 or 0
 */

int wild(char *sr, char *de)
{
	if (*sr == *de && *sr != 0 && *de != 0)
		return (wild(sr + 1, de + 1));
	if (*sr == 0 && *de == 0)
		return (1);
	if (*de == '*')
	{
		if (wild(sr, de + 1) || wild(sr + 1, de))
			return (1);
		if (*(sr + 1) != 0 && *de == 0)
			return (0);
	}
	return (0);
}





