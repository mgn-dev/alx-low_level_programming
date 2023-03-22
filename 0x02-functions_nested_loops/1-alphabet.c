#include "main.h"

/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line.
*
* Return: null
*/
void print_alphabet(void)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(arr[i]);
	}
}
