#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * append_text_to_file - appends text to the end of file
 * @file: files name
 * @text: the text to append
 * Return: 1 on success and -1 other wise
 */

int append_text_to_file(const char *file, char *text)
{
	int fd;
	ssize_t writeno;
	size_t strlen;

	if (!file)
		return (-1);
	fd = open(file, O_WRONLY | O_APPEND);
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
 * _strlen - gets the length of string
 * @s: the string
 * Return: the length
 */

size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i])
		i++;
	return (i);
}


