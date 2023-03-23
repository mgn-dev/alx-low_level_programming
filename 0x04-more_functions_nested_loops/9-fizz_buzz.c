#include <stdio.h>

/**
* fizz_buzz - fizz buzz test
*
*/
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
			printf(" ");
	}
	printf("\n");
}


/**
* main - run the fizz buzz test function.
*
* Return: null
*/
int main(void)
{
	fizz_buzz();
	return (0);
}
