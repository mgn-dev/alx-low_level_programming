#include <stdio.h>

/**
* main - prints combinations of 3 digit numbers, followed by a new line.
*
* Return: null
*/
int main(void)
{
	int i;
	int j;
	int k;
	int p = 49;
	int q = 50;

	for (i = 48; i < 56; i++)
	{
		for (j = p; j < 57; j++)
		{
			for (k = q; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		q++;
		p++;
	}
	putchar(10);
	return (0);
}
