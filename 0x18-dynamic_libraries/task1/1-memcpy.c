#include "main.h"

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
