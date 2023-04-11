#include <stdlib.h>
#include <stddef.h>

/**
* _strlen - returns the length of a string.
* @s: a string argument.
*
* Return: length of string argument.
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}

/**
* *_strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string to initialize array.
*
* Return: pointer to a newly allocated space in memory.
*/
char *_strdup(char *str)
{
	int size;
	int i;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		size = _strlen(str);
		new_str = malloc(sizeof(char) * (size + 1));

		if (new_str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				new_str[i] = str[i];
			}
		}
	}

	return (new_str);
}
