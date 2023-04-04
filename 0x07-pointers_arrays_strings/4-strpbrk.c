#include <stddef.h>

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
