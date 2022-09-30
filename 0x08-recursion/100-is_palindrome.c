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
 * is_palindrome - check if s is palindrome
 * @s: the string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
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

int compare(char *s, int i, int f)
{
	if (i == f)
		return (1);
	if (i == f - 1)
		return (s[i] == s[f]);
	if (s[i] != s[f])
		return (0);
	return (compare(s, i + 1, f - 1));
}
