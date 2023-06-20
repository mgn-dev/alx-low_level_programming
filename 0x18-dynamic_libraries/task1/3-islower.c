#include "main.h"

/**
* _islower - Short description, single line
*@c: int value of character to test
*
* Return: 1 if condition is true 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
