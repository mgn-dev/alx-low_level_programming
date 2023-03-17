#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print the last digit of the number stored in the variable n
*
* Return: null
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than %d\n", n, last_digit, 5);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, last_digit, 0);
	}
	else
	{
		printf("Last digit of %d is %d and is less than %d and not %d\n",
			n, last_digit, 6, 0);
	}
	return (0);
}
