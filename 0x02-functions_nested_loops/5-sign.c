extern int _putchar(char c);

/**
* print_sign - checks whether a number negative or not,
* prints + if positive otherwise - if negative.
* @n: int value of number to test
*
* Return: 1 if condition is positive 0 if 0, otherwise negative 1
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}

}
