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
* puts2 - prints every other character of a string, starting with
* the first character followed by a new line.
* @str: the string to print.
*
*/
void puts2(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
