#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int isValidFile(unsigned char *);

void print_error(char *, char *, int);

size_t _strlen(char *);

void print_elf(unsigned char *);

void class(unsigned char);

void data(unsigned char);

void version(unsigned char);

void os(unsigned char);

void abi(unsigned char);

void type(unsigned char *);

void entry(unsigned char, unsigned char *);

void os_c(unsigned char);
/**
 * main - entry point
 * @ac: num of args
 * @av: array of args
 * Return: always 0
 */

int main(int ac, char **av)
{
	unsigned char buf[32];
	ssize_t readno;
	int fd;
	char *msg;

	if (ac != 2)
	{
		msg = "Usage: elf_header elf_filename\n";
		print_error(msg, NULL, 0);
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd != -1)
	{
		readno = read(fd, buf, 32);
	}
	else
	{
		msg = "Error: Unable to open file ";
		print_error(msg, av[1], -1);
		exit(98);
	}

	if (readno == 32)
	{
		if (!isValidFile(buf))
		{
			msg = "Error: is not an ELF file\n";
			print_error(msg, av[1], 7);
			exit(98);
		}
	}
	else
	{
		msg = "Error: Unable to properly read file ";
		print_error(msg, av[1], -1);
		exit(98);
	}

	print_elf(buf);
	return (0);
}

/**
 * class - prints the class of the os
 * @c: the class byte
 */

void class(unsigned char c)
{
	int i = 0;
	char classes[][6] = {"ELF32", "ELF64"};

	printf("  Class:");
	for (; i < 29; i++)
		printf(" ");
	printf("%s\n", classes[c - 1]);
}

/**
 * data - prints data type, little or big endian
 * @c: the data type byte
 */

void data(unsigned char c)
{
	size_t i = 0;

	printf("  Data:");
	for (; i < 30; i++)
		printf(" ");
	if (c == 1)
		printf("2's complement, little endian\n");
	else if (c == 2)
		printf("2's complement, big endian\n");
}

/**
 * version - prints the version of the file
 * @c: the version byte
 */

void version(unsigned char c)
{
	size_t i = 0;

	printf("  Version:");
	for (; i < 27; i++)
		printf(" ");
	if (c == 1)
		printf("1 (current)\n");
	else
		printf("1\n");
}

/**
 * isValidFile - check file's validity
 * @buf: buffer
 * Return: 1 if valid and 0 otherwise
 */

int isValidFile(unsigned char *buf)
{
	if (buf[0] != 127 || buf[1] != 69 || buf[2] != 76 || buf[3] != 70)
		return (0);
	return (1);
}

/**
 * print_error - prints error message to the stderr
 * @msg: the message to print
 * @file: the file's name
 * @pos: position where the file's name is to be inserted in the msg
 */

void print_error(char *msg, char *file, int pos)
{
	char *buf = NULL;
	int len, i;

	if (msg)
		len = (int) _strlen(msg);
	else
		return;
	if (!file)
	{
		write(STDERR_FILENO, msg, len);
	}
	else if (pos == -1)
	{
		write(STDERR_FILENO, msg, len);
		write(STDERR_FILENO, file, _strlen(file));
		write(STDERR_FILENO, "\n", 1);
	}
	else if (pos > 0 && pos < len)
	{
		buf = malloc(pos);
		for (i = 0; i < pos; i++)
			buf[i] = msg[i];
		write(STDERR_FILENO, buf, pos);
		free(buf);
		write(STDERR_FILENO, file, _strlen(file));
		write(STDERR_FILENO, " ", 1);
		buf = malloc(len - pos);
		for (i = 0; i < (len - pos); i++)
			buf[i] = msg[pos + i];
		write(STDERR_FILENO, buf, (len - pos));
	}
	if (buf)
		free(buf);
}

/**
 * _strlen - gets the length of string s
 * @s: the string
 * Return: the length as size_t
 */

size_t _strlen(char *s)
{
	size_t i = 0;

	while (s && s[i])
		i++;
	return (i);
}

/**
 * print_elf - prints the elf header entries
 * @buf: the buffer containing the first 32 bytes of the file
 */

void print_elf(unsigned char *buf)
{
	size_t i = 0;

	if (!buf)
		return;
	printf("ELF Header:\n  Magic:   ");
	while (i < 15)
	{
		printf("%02x ", buf[i]);
		i++;
	}
	printf("%02x\n", buf[i]);
	class(buf[4]);
	data(buf[5]);
	version(buf[6]);
	os(buf[7]);
	os_c(buf[7]);
	abi(buf[8]);
	type(buf);
	entry(buf[4], buf);
}

/**
 * entry - prints the program entry point address
 * @class: machine class
 * @buf: header bytes
 */

void entry(unsigned char class, unsigned char *buf)
{
	int s = 4, i = 0, j;

	s *= class;
	printf("  Entry point address:");
	for (; i < 15; i++)
		printf(" ");
	i = 0;
	printf("0x");
	while (i < s)
	{
		i++;
		if (buf[24 + i] == 0)
			break;
	}
	j = i;
	if (buf[5] == 1)
		while (i > 0)
		{
			i--;
			i != j - 1 ? printf("%02x", buf[24 + i])
				: printf("%x", buf[24 + i]);
		}
	else if (buf[5] == 2 && i > 0)
		for (j = 1; j < i; j++)
		{
			j != 1 ? printf("%02x", buf[24 + j]) : printf("%x", buf[24 + j]);
		}

	printf("\n");

}
/**
 * abi - prints the system ABI
 * @c: the ABI char byte
 */

void abi(unsigned char c)
{
	size_t i = 0;

	printf("  ABI Version:");
	for (; i < 23; i++)
		printf(" ");
	printf("%d\n", c);
}

/**
 * type - prints the file type
 * @buf: the header bytes
 */

void type(unsigned char *buf)
{
	size_t i = 0;

	char *(msg[10]) = {"EXEC (Executable file)", "REL (Relocatable file)"
		, "EXEC (Executable file)", "DYN (Shared object file)",
			"CORE (Core file)", "LOOS (Reserved inclusive range)",
			"HIOS (Operating system specific)", "LOPROC (Reserved inclusive range)",
			"HIPROC (Processor specific)"};

	printf("  Type:");
	for (; i < 30; i++)
		printf(" ");
	if (buf[16] < 5)
		printf("%s\n", msg[(int) buf[16]]);
	else if ((int) buf[16] == 239 && buf[17] == 0)
		printf("%s\n", msg[5]);
	else if ((int) buf[16] == 239 && (int) buf[17] == 255)
		printf("%s\n", msg[6]);
	else if ((int) buf[16] == 255 && buf[17] == 0)
		printf("%s\n", msg[7]);
	else if ((int) buf[16] == 255 && (int) buf[17] == 255)
		printf("%s\n", msg[8]);
}

/**
 * os - prints the system OS
 * @c: OS byte
 */

void os(unsigned char c)
{
	char *os_abi = NULL;
	size_t i = 0;

	printf("  OS/ABI:");
	for (; i < 28; i++)
		printf(" ");
	switch (c)
	{
		case (0):
			os_abi = "UNIX - System V";
			break;
		case (1):
			os_abi = "HP-UX";
			break;
		case (2):
			os_abi = "UNIX - NetBSD";
			break;
		case (3):
			os_abi = "Linux";
			break;
		case (4):
			os_abi = "GNU Hurd";
			break;
		case (6):
			os_abi = "UNIX - Solaris";
			break;
		case (7):
			os_abi = "IBM - AIX";
			break;
		case (8):
			os_abi = "IRIX";
			break;
		case (9):
			os_abi = "FreeBSD";
			break;
		case (10):
			os_abi = "Tru64 - UNIX";
			break;
		case (11):
			os_abi = "Novell Modesto";
			break;
	}
	if (os_abi)
		printf("%s", os_abi);
}

/**
 * os_c - continuation of os()
 * @c: OS byte
 */

void os_c(unsigned char c)
{
	char *os_abi = NULL;
	int i = 0;

	switch (c)
	{
		case (12):
			os_abi = "OpenBSD";
			break;
		case (13):
			os_abi = "OpenVMS";
			break;
		case (14):
			os_abi = "NonStop";
			break;
		case (15):
			os_abi = "AROS";
			break;
		case (16):
			os_abi = "FenixOS";
			break;
		case (17):
			os_abi = "CloudABI";
			break;
		case (18):
			os_abi = "Stratus - VOS";
			break;
	}
	if (os_abi)
		printf("%s", os_abi);
	else
		for (; i < 13; i++)
			printf(" ");
	printf("\n");

}
