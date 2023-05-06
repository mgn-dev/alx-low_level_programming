#include "main.h"

/**
* get_endianness - function that checks the endianness.
*
* Return: 1 if little or 0.
*/
int get_endianness(void)
{
	unsigned int val = 0x12345678;
	char *test = (char *)&val;

	if (test[0] == 0x78)
		return (1);
	else
		return (0);
}
