#include <stddef.h>

/**
* *_strchr - locates a character in a string.
* @c: char to search for
* @s: string to search for char
*
* Return: Returns a pointer to s or NULL.
*/
char *_strchr(char *s, char c)
{
	char *ret = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ret = s;
			break;
		}
		s++;
	}

	if (*s == '\0' && *s == c)
	{
		ret = s;
	}

	return (ret);
}
