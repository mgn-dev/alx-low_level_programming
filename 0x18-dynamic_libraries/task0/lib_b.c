#include "main.h"
#include "limits.h"


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
* _strcat - concatenates two strings.
* @dest: destination string.
* @src: source string to append.
*
* Return: a pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);
}

/**
* _strncat - concatenates two strings.
* @dest: destination string.
* @src: source string to append.
* @n: n chars to copy.
*
* Return: a pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i = 0;

	while ((i < n) && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	if (i == n && src[i] != '\0')
		dest[len + _strlen(src)] = '\0';
	else
		dest[len + i] = '\0';

	return (dest);
}

/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @dest: destination buffer
* @src: source string
*
* Return: destination buffer
*/
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p);
}

/**
* _atoi - convert a string to an integer.
* @s: the string to convert.
*
* Return: an integer representation of the string.
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int sign_count = 0;
	int i = 0;


	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign_count++;
		i++;
	}

	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		result = result * 10 + (s[i++] - '0');
	}

	if (result != 0 && sign_count % 2 != 0)
	{
		sign = -1;
		result = result * sign;
	}


	return (result);
}
