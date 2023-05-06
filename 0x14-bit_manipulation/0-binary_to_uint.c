#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
* power - function that calculates the exponent of a number.
* @base: base number.
* @exponent: exponent.
*
* Return: integer result from calculation.
*/
int power(int base, int exponent)
{
	float result = 1;
	int i;

	if (exponent == 0)
	{
		result = 1;
	}
	else if (exponent > 0)
	{
		for (i = 1; i <= exponent; i++)
			result *= (float)base;
	}
	else
	{
		exponent = -exponent;

		for (i = 1; i <= exponent; i++)
			result *= (float)base;

		result = 1 / result;
	}

	return ((int)(result));
}

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: binary string
*
* Return: unsigned int from binary string.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			n += b[i] == '1' ? power(2, (len - 1) - i) : 0;
		}
		else
		{
			n = 0;
			break;
		}
	}

	return (n);
}
