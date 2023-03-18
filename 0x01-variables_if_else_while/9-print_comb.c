#include <stdio.h>

/**
* main - prints combinations of 1 digit numbers, followed by a new line.
*
* Return: null
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
