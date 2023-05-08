#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
* create_file - function that creates a file.
* @filename: name of the file to create.
* @text_content: text_content is a NULL terminated string to write to the file.
*
* Return: 1 on success, -1 otherwise.
*/
int create_file(const char *filename, char *text_content)
{
	int file_des, len = 0;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
		return (1);

	while (text_content[len] != '\0')
		len++;

	if (len == 0)
		return (1);

	if (write(file_des, text_content, len + 1) == -1)
		return (-1);
	else
		return (1);
}
