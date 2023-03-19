#include <stdio.h>

/**
* main - prints combinations of 2 digit numbers, followed by a new line.
*
* Return: null
*/
int main(void)
{
	int i;
	int j;
	int n = 49;

	for (i = 48; i < 57; i++)
	{
		for (j = n; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
		n++;
	}
	putchar(10);
	return (0);
}
