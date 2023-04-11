#include <stdio.h>

/**
* _atoi - convert a string to an integer.
* @s: the string to convert.
*
* Return: an integer representation of the string.
*/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int sign_count = 0;
	int i = 0;


	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign_count++;
		i++;
	}

	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		result = result * 10 + (s[i++] - '0');
	}

	if (result != 0 && sign_count % 2 != 0)
	{
		sign = -1;
		result = result * sign;
	}


	return (result);
}


/**
* main - multiplication.
* @argc: number of arguments.
* @argv: argument array.
*
* Return: 1 for error or 0.
*/
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int ans;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	ans = num1 * num2;

	printf("%d\n", ans);

	return (0);
}
