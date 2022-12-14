#include "main.h"
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the driver
 * @ac: arg count
 * @av: args
 * Return: 0 on success and -1 other wise
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, rto, mask;
	struct stat fs;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rto = stat(av[2], &fs);
	fd_to = open(av[2], O_WRONLY | O_TRUNC);
	if (fd_to < 0)
		fd_to = creat(av[2], S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	mask = (1 << 8);
	rto = stat(av[1], &fs);
	fd_from = open(av[1], O_RDONLY);
	if ((rto == 0 && (fs.st_mode & mask) == 0) || fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		call_close(fd_to);
		remove(av[2]);
		exit(98);
	}
	copy(fd_from, fd_to, av[1], av[2]);
	return (0);
}

/**
 * copy - copy from file to another
 * @fd_from: from fd
 * @fd_to: to fd
 * @from: from file
 * @to: to file
 */

void copy(int fd_from, int fd_to, char *from, char *to)
{
	char buf[1024];
	ssize_t readno, writeno;

	while ((readno = read(fd_from, buf, 1024)) > 0)
	{
		writeno = write(fd_to, buf, readno);
		if (writeno < readno)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			call_close(fd_to);
			call_close(fd_from);
			exit(99);
		}
	}

	if (readno < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		call_close(fd_from);
		call_close(fd_to);
		exit(98);
	}
	call_close(fd_to);
	call_close(fd_from);
}

/**
 * call_close - call close
 * @fd: fd
 */

void call_close(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


