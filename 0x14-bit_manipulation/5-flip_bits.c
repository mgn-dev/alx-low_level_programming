#include "main.h"

/**
* flip_bits - function that returns the number of bits you would
* need to flip to get from one number to another.
* @n: 1st number.
* @m: 2nd number.
*
* Return: number of flipped bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		if (xor & 1)
			count++;
		xor >>= 1;
	}

	return (count);
}
