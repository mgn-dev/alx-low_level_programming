#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

/**
* read_textfile - function that reads a text file and
* prints it to the POSIX standard output.
* @filename: name of the file to read.
* @letters: number of letters it should read and print.
*
* Return: actual number of letters it could read and print.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t nr = 0;
	char *buf_ptr;

	buf_ptr = malloc(sizeof(char) * letters + 1);

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
		return (0);

	nr += read(file_des, buf_ptr, letters);

	if (nr == -1)
		return (0);

	write(STDOUT_FILENO, buf_ptr, letters + 1);

	close(file_des);

	return (nr);
}
