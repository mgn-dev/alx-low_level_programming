#include <stdio.h>

/**
* main - prints the alphabet in lowercase, followed by a new line
* except q and e
*
* Return: null
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar(10);
	return (0);
}
