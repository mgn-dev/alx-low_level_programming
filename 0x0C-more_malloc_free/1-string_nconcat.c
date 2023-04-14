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
* *string_nconcat - concatenates two strings.
* @s1: string 1
* @s2: string 2
* @n: number of chars
*
* Return: point to a newly allocated space in memory.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = _strlen(s1);
	unsigned int size2 = _strlen(s2);
	unsigned int i, j;
	char *str = malloc(sizeof(*str) * (size1 + size2 + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1; i++)
		{
			str[i] = s1[i];
		}

		for (j = 0; j < n && j < size2; j++)
		{
			str[i + j] = s2[j];
		}

		str[i + j] = '\0';

		return (str);
	}
}
