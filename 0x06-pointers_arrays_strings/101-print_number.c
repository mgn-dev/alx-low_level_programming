#include "main.h"

/**
* print_number - prints an integer.
* @n: int to print
*
*/
void print_number(int n)
{
	char digits[10];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;

		while (n > 0)
		{
			digits[i] = (n % 10) + '0';
			n /= 10;
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			digits[i] = (n % 10) + '0';
			n /= 10;
			i++;
		}
	}

	while (i > 0)
	{
		_putchar(digits[i - 1]);
		i--;
	}
}
