#include "main.h"
#include <stddef.h>

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
