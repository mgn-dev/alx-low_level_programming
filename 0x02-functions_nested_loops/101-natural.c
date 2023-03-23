#include <stdio.h>

/**
* natural - prints sum of integers divisible by a and b.
* @a: the first divisible number.
* @b: the second divisible number.
* @limit: the upper limit.
*
*/
void natural(int a, int b, int limit)
{
	int sum = 0;
	int i;

	for (i = 0; i < limit; i++)
	{
		if (i % a == 0)
		{
			sum += i;
		}

		if (i % b == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);
}

/**
* main - run the jack_bauer function
*
* Return: Always 0.
*/
int main(void)
{
	natural(3, 5, 10);
	natural(3, 5, 1024);
	return (0);
}
