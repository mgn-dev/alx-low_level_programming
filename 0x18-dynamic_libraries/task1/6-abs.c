#include "main.h"

/**
* _abs - returns an absolute value.
* @n: int value of number to test
*
* Return: the int without a sign
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n / (-1));
	}
	else
	{
		return (n);
	}

}
