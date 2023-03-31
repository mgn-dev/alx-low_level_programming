#include "main.h"

/**
* rec_func - a recursive int printer.
* @n: int to print
*
*/
void rec_func(int n)
{
	if (n > 0)
	{
		rec_func(n / 10);
		_putchar((n % 10) + '0');
	}
}

/**
* print_number - prints an integer.
* @n: int to print
*
*/
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;

		rec_func(n);
	}
	else
	{
		rec_func(n);
	}
}
