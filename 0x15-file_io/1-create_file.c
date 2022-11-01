#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *
 */

int create_file(const char *filename, char *text)
{
	int fd;
	char *buf;

	buf = malloc(_strlen(text));
	if (!buf || !filename)
		return (-1);
}
