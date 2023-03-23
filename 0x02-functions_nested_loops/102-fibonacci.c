#include <stdio.h>

/**
* fib - prints fibonacci up to n.
* @n: the terms of fibonacci to print.
*
*/
void fib(int n)
{
	int i;
	long int prev;
	long int prev2;
	long int curr;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			prev2 = 1;
			printf("%ld", prev2);
			if (n > 0)
				printf(", ");
		}
		else if (i == 1)
		{
			prev = 2;
			printf("%ld", prev);
			if (n > 1)
				printf(", ");
		}
		else
		{
			curr = prev + prev2;
			printf("%ld", curr);
			prev2 = prev;
			prev = curr;
			if (i < n - 1)
				printf(", ");
		}
	}
	printf("\n");
}

/**
* main - run the jack_bauer function
*
* Return: Always 0.
*/
int main(void)
{
	fib(50);
	return (0);
}
