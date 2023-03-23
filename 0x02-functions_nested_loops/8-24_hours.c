#include "main.h"

/**
* jack_bauer - prints every minute in a day
*
*/
void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 2; i++)
	{
		if (i < 2)
		{
			clockwork(i, 9, 5, 9);
		}
		else
		{
			clockwork(i, 3, 5, 9);
		}
	}
}

/**
* clockwork - prints the values returned by i, j, k, l.
* @i: 1st index
* @o: 2nd index limit
* @p: 3rd index limit
* @q: 4th index limit
*
*/
void clockwork(int i, int o, int p, int q)
{
	int j;
	int k;
	int l;

	for (j = 0; j <= o; j++)
	{
		for (k = 0; k <= p; k++)
		{
			for (l = 0; l <= q; l++)
			{
				_putchar(i + '0');
				_putchar(j + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');
			}
		}
	}
}
