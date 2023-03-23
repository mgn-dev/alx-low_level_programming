#include "main.h"

/**
* more_numbers - prints 10 times the numbers from 0 to 14
* followed by a new line.
*
*/
void more_numbers(void)
{
	char arr[] = "01234567891011121314\n";
	int i;
	int j;

	for (j = 0; j < 10; j++)
		for (i = 0; i < 21; i++)
		{
			_putchar(arr[i]);
		}
}
