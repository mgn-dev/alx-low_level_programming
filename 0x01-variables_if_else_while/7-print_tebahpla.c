#include <stdio.h>

/**
* main - prints the alphabet in lowercase, in reverse,
* followed by a new line.
*
* Return: null
*/
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
