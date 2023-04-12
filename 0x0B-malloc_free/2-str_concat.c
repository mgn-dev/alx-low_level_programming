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

	if (s != NULL)
	{
		while (*s++)
		{
			length++;
		}
	}

	return (length);
}

/**
* *str_concat - concatenates two strings.
* @s1: first contents.
* @s2: second contents.
*
* Return: pointer to a newly allocated space in memory.
*/
char *str_concat(char *s1, char *s2)
{
	int size1 = _strlen(s1);
	int size2 = _strlen(s2);
	char *new_str = malloc(sizeof(char) * (size1 + size2));

	if (new_str == NULL)
	{
		return (NULL);
	}
	else
	{
		int i, j;

		for (i = 0; i < size1; i++)
			new_str[i] = s1[i];

		for (j = size1; j < (size1 + size2); j++)
			new_str[j] = s2[j];
	}

	return (new_str);
}
