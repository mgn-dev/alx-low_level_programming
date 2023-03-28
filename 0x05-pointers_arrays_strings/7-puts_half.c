
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
* puts_half - prints half of a string, followed by a new line.
* @str: the string to print
*
*/
void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (len % 3 == 0)
	{
		for (i = (len + 1) / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for  (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
