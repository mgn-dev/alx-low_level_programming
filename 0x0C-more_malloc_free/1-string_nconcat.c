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

	char *str = malloc(sizeof(char) * (size1 + size2 + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned int i, j;

		for (i = 0; i < size1; i++)
		{
			str[i] = s1[i];
		}

		if (n == 0 || size2 == 0)
		{
			str[i] = '\0';
		}
		else if (n >= size2)
		{
			for (j = 0; j < size2; j++)
				str[i + j] = s2[j];
			str[i + j] = '\0';
		}
		else
		{
			for (j = 0; j < n; j++)
				str[i + j] = s2[j];
			str[i + j] = '\0';
		}

		return (str);
	}
}
