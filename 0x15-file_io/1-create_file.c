#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates file
 * @file: name of file to create
 * @text: content of the file
 * Return: 1 on success and -1 otherwise
 */

int create_file(const char *file, char *text)
{
	int fd;
	size_t strlen;
	ssize_t writeno;

	if (!file)
		return (-1);
	fd = open(file, O_WRONLY | O_TRUNC);
	if (fd < 0)
	{
		close(fd);
		fd = creat(file, S_IRUSR | S_IWUSR);
	}
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}
	if (text)
	{
		strlen = _strlen(text);
		writeno = write(fd, text, strlen);
		if (writeno < (ssize_t) strlen)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * _strlen - counts the number of chars in a string
 * @s: the string
 * Return: length of string
 */

size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i])
		i++;
	return (i);
}

