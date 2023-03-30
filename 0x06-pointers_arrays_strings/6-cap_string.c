/**
* *cap_string -  capitalizes all words of a string.
* @s: string to capitalize.
*
* Return: capitalized string.
*/
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	short caps = 0;
	char sep[13] = {'\t', ' ', '\n', ',', ';', '.', '!',
					'?', '"', '(', ')', '{', '}'};

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				caps = 1;
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (s[i - 1] == sep[j])
					{
						caps = 1;
						break;
					}
				}
			}

			if (caps)
			{
				s[i] -= 32;
				caps = 0;
			}
		}

		i++;
	}

	return (s);
}
