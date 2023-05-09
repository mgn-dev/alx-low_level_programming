#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define BUFFASIZE 1024
/**
 * write_failed - exits main when operations fail.
 * @ret: input value to test.
 * @s: input string.
*/
void write_failed(int ret, char *s)
{
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(99);
	}
}

/**
 * read_failed - exits main when operations fail.
 * @ret: input value to test.
 * @s: input string.
*/
void read_failed(int ret, char *s)
{
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(98);
	}
}

/**
 * close_failed - exits main when operations fail.
 * @ret: input value to test.
 * @fd: file descriptor.
*/
void close_failed(int ret, int fd)
{
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}

/**
 * main - check the code
 * @ac: number of arguments.
 * @av: argument given for filename.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_r, fd_w, cv;
	char buffa[BUFFASIZE];
	ssize_t nr, nw;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_r = open(av[1], O_RDONLY | O_EXCL);
	read_failed(fd_r, av[1]);

	fd_w = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	write_failed(fd_w, av[2]);

	do {
		nr = read(fd_r, buffa, BUFFASIZE);
		read_failed(nr, av[1]);
		nw = write(fd_w, buffa, nr);
		write_failed(nw, av[2]);
	} while (nr > 0);

	cv = close(fd_r);
	close_failed(cv, fd_r);

	cv = close(fd_w);
	close_failed(cv, fd_w);

	return (0);
}
