#include "main.h"

/**
* print_most_numbers - prints the numbers from 0 to 9 followed by a new line.
*
*/
void print_most_numbers(void)
{
	char arr[] = "01356789\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(arr[i]);
	}
}
