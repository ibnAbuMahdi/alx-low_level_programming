#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints to stderr
 * Description: it prints to standard error stream
 * Return: it always returns 0
 */
int main(void)
{
	fprintf(stderr, NC "and that piece of art is useful\"
	- Dora Korpar, 2015-10-19\n");
	return (0);
}
