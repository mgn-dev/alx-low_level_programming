#include <stdio.h>

/**
* main - prints the numbers of base 16,
*followed by a new line.
*
* Return: null
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
