/**
* check_prime - checks if the number is prime or not
* @n: number to evaluate
* @i: initial divisor
*
* Return: if a number is prime.
*/
int check_prime(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}

	return (check_prime(n, i + 1));
}

/**
* is_prime_number - returns 1 if input is a prime number else return 0.
* @n: prime number
*
* Return: prime
*/
int is_prime_number(int n)
{
	if (check_prime(n, 2))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
