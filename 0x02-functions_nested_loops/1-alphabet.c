#include "_putchar.c"

/**
* print_alphabet - prints the alphabet, in lowercase, followed by a new line.
*
* Return: null
*/
void print_alphabet(void)
{
	char arr[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
}

/**
* main - runs the print_alphabet function
*
*Return: null
*/
int main(void)
{
	print_alphabet();
	return (0);
}
