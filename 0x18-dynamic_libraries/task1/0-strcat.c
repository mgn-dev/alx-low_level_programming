#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: destination string.
* @src: source string to append.
*
* Return: a pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
    int len = _strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);
}
