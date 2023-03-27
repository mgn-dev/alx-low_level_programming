#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: the string to print
*
*/
void print_rev(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	while (len >= 0)
	{
		_putchar(*s--);
		len--;
	}
	_putchar('\n');
}
