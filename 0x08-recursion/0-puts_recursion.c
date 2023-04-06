#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line.
* @s: string to print.
*
*/
void _puts_recursion(char *s)
{
	_putchar(*s++);

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_puts_recursion(s);
	}
}
