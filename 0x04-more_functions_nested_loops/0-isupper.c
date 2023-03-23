#include <stdio.h>

/**
* _isupper - checks if a character is uppercase
* @c: the value to check
*
* Return: returns 1 for true 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
