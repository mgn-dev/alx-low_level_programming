#include "main.h"
#include <limits.h>

/**
* get_bit - function that returns the value of a bit at a given index.
* @n: number to extract the bit from
* @index: the position of bit in binary representation of number.
*
* Return: bit at index.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = 0;
	unsigned long int i, mask = 0;

	mask = 1 << index;

	if (n == 0)
		return (0);

	for (i = n; i > 0; len++)
		i /= 2;

	if (n > ULONG_MAX || index >= 64)
		return (-1);

	return ((n & mask) != 0);
}
