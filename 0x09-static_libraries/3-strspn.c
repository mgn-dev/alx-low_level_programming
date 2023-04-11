#include "2-strchr.c"

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
