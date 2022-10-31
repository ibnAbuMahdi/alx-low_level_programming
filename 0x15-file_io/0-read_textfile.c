#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * read_textfile - reads c chars from file *f to stdout
 * @c: number of chars to print
 * @f: pointer to the file name
 * Return: number of chars printed or 0 if failed
 */

ssize_t read_textfile(const char *f, size_t c)
{
	char *buf;
	int fd, readno;
	size_t writeno;

	buf = malloc(c);
	if (!f || !buf || !c)
		return (0);
	fd = open(f, O_RDONLY);
	if (fd < 0)
		return (0);
	readno = read(fd, buf, c);
	if (readno < 0)
		return (0);
	writeno = write(STDOUT_FILENO, buf, c);
	if (writeno < (size_t) readno)
		return (0);
	free(buf);
	close(fd);
	return (writeno);
}
