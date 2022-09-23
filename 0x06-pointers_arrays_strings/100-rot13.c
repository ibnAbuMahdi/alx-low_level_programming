#include "main.h"

/**
 * rot13 - rot13 encode/decode
 * @s: the string
 * Return: string
 */

char *rot13(char *s)
{
	/**
	 * @i: loop counter
	 */
	int i = 0;

	while (*(s + i) != 0)
	{
		char str[] = "abcdefghijklm";
		char str1[] = "nopqrstuvwxyz";
		char str2[] = "ABCDEFGHIJKLM";
		char str3[] = "NOPQRSTUVWXYZ";
		int k = 0;

		while (str[k] != 0)
		{
			if (s[i] == str[k])
				*(s + i) = str1[k];
			else if (s[i] == str1[k])
				*(s + i) = str[k];
			else if (s[i] == str2[k])
				*(s + i) = str3[k];
			else if (s[i] == str3[k])
				*(s + i) = str2[k];
			k++;
		}
		i++;
	}
	return (s);
}
