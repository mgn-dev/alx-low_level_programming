#include <stdlib.h>
#include <stddef.h>

/**
* *_memset - fills memory with a constant byte.
* @s: initial memory address to fill
* @b: byte to use to fill memory
* @n: number of bytes
*
* Return: pointer to memory area.
*/
void *_memset(void *s, char b, unsigned int n)
{
	unsigned char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (s);
}


/**
* *_calloc - function that allocates memory for an array, using malloc.
* @nmemb: number of elements
* @size: size in bytes per element
*
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	else
	{
		void *ptr = malloc(nmemb * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			_memset(ptr, 0, nmemb * size);
			return (ptr);
		}
	}
}
