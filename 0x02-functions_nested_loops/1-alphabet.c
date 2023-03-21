#include "_putchar.c"

/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line.
*
* Return: null
*/
void print_alphabet(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	i = 10;
	_putchar(i);
}
