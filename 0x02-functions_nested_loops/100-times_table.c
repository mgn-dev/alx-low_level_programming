#include "main.h"
/**
* print_times_table - prints n times table
* @n: the n to create a times table from
*
*/
void print_times_table(int n)
{
	int i;
	int j;
	int result;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result > 99)
				{
					if (j > 0)
					{
						_putchar(',');
						_putchar(' ');
					}
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 9)
				{
					if (j > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					if (j > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(result + '0');
				}
			}
			_putchar('\n');
		}
	}
}
