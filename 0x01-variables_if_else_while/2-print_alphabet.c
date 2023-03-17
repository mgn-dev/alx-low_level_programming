#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line.
*
* Return: null
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
