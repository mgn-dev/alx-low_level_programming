#include "main.h"

/**
* _puts - prints a string, followed by a new line, to stdout.
* @str: the string to print to std out
*
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
* _isdigit - checks if a character is a digit
* @c: the value to check
*
* Return: returns 1 for true 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
* *_strncpy -   copies a string.
* @dest: destination string to copy to.
* @src: source string to copy from
* @n: number of chars to copy.
*
* Return: a pointer to destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

/**
* _strcmp -  compares two strings.
* @s1: to string to compare.
* @s2: the string to compare to.
*
* Return: 0 if s1 = s2, a non 0 integer otherwise.
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}

/**
* *_memset - fills memory with a constant byte.
* @s: initial memory address to fill
* @b: byte to use to fill memory
* @n: number of bytes
*
* Return: pointer to memory area.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}

	return (s);
}
