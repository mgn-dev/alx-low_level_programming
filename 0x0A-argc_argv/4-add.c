#include <stdio.h>

/**
* _isdigit - checks if a character is a digit
* @c: the value to check
*
* Return: returns 1 for true 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

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
	int ans = 0;
	int i, j = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (_isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;
		ans += _atoi(argv[i]);
	}

	printf("%d\n", ans);

	return (0);
}
