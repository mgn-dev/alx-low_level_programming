#include "main.h"
#include <limits.h>
#include <stddef.h>

/**
* clear_bit - function that sets the value of a bit to 0 at a given index.
* @n: number to set bit to.
* @index: index of position to set.
*
* Return: 0 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, num, result;

	if (n == NULL || *n > ULONG_MAX || index >= 64)
		return (-1);

	mask = ~(1 << index);
	num = *n;
	result = num & mask;
	*n = result;

	return (1);
}
