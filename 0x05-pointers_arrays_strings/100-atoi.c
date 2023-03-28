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

	if (result != 0)
	{
		if (sign_count % 2 != 0)
			sign = -1;
		result = sign * result;
	}

	return (result);
}
