#include <stdlib.h>
#include <stddef.h>

/**
* *malloc_checked - allocates memory using malloc.
* @b: size to allocate.
*
* Return: pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (malloc(b));
	}
}
