#include "main.h"

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
* rev_string - prints a string, in reverse.
* @s: the string to print
*
*/
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
