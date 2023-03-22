extern int _putchar(char c);

/**
* times_table - prints every minute in a day
*
*/
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (result < 10)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			else
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
