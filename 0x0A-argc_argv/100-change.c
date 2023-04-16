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
* main - change.
* @argc: number of arguments.
* @argv: argument array.
*
* Return: change
*/
int main(int argc, char *argv[])
{
	int num = _atoi(argv[1]), ans = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else if (num >= 1)
			num -= 1;
		else
			num = 0;
		ans++;
	}

	printf("%d\n", ans);

	return (0);
}
