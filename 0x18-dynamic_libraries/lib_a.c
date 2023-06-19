#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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

/**
* _isalpha - checks whether a character is alphabet or not.
*@c: int value of character to test
*
* Return: 1 if condition is true 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
* _abs - returns an absolute value.
* @n: int value of number to test
*
* Return: the int without a sign
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n / (-1));
	}
	else
	{
		return (n);
	}

}

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
