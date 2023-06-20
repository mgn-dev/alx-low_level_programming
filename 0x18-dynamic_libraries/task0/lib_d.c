#include "main.h"
#include <stddef.h>

/**
* *_memcpy - copies memory area.
* @dest: destination memory location
* @src: source memory location
* @n: number of bytes to copy
*
* Return: pointer to destination.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dst = dest;
	const char *s = src;

	while (n > 0)
	{
		*dst++ = *s++;
		n--;
	}

	return (dest);
}

/**
* *_strchr - locates a character in a string.
* @c: char to search for
* @s: string to search for char
*
* Return: Returns a pointer to s or NULL.
*/
char *_strchr(char *s, char c)
{
	char *ret = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			ret = s;
			break;
		}
		s++;
	}

	if (*s == '\0' && *s == c)
	{
		ret = s;
	}

	return (ret);
}

/**
* _strspn - gets the length of a prefix substring.
* @s: string set
* @accept: substring to evaluate from string set.
*
* Return: length
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	const char *p = s;

	while (*p != '\0' && _strchr(accept, *p) != NULL)
	{
		len++;
		p++;
	}

	return (len);
}

/**
* *_strpbrk - searches a string for any of a set of bytes.
* @s: string to seach from.
* @accept: string to find.
*
* Return: pointer to the byte that matches one of the bytes in accept or NULL.
*/
char *_strpbrk(char *s, char *accept)
{
	char *p;
	char *q;

	p = s;
	while (*p != '\0')
	{
		q = accept;
		while (*q != '\0')
		{
			if (*p == *q)
			{
				return (p);
			}

			q++;
		}

		p++;
	}

	return (NULL);
}

/**
* *_strstr - locates a substring.
* @haystack: string to search in
* @needle: string to search
*
* Return: pointer to beginning of matching substring.
*/
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *q = needle;

	while (*p != '\0')
	{
		const char *r = p;

		while (*r == *q && *q != '\0')
		{
			r++;
			q++;
		}
		if (*q == '\0')
		{
			return (p);
		}
		else
		{
			q = needle;
			p++;
		}
	}

	return (NULL);
}
