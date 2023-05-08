#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file.
* @filename: name of the file.
* @text_content: the NULL terminated string to add at the end of the file.
*
* Return: 1 on success, -1 otherwise.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, len = 0;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND | O_EXCL);

	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		if (write(file_des, text_content, len) > -1)
			return (1);
		else
			return (-1);
	}

	return (1);
}
