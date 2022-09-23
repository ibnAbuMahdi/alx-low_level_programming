#include "main.h"

/**
 * cap_string - capitalizes
 * @s: the string
 * Return: string
 */

char *cap_string(char *s)
{
	/**
	 * @i: loop counter
	 */
	int i = 0;

	while (*(s + i) != 0)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 32;
			}
			else
			{
				char str[] = ",;.!?\"(){} \t\n";
				int k = 0;

				while (str[k] != 0)
				{
					if (s[i - 1] == str[k])
						*(s + i) = *(s + i) - 32;
					k++;
				}
			}
		}
		i++;
	}
	return (s);
}
