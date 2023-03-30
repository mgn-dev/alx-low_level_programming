/**
* *leet - encodes a string into 1337.
* @s: string to encode.
*
* Return: encode string.
*/
char *leet(char *s)
{
	char ucl[] = {'A', 'E', 'O', 'T', 'L'};
	char lcl[] = {'a', 'e', 'o', 't', 'l'};
	int code[] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == ucl[j] || s[i] == lcl[j])
			{
				s[i] = code[j];
			}
		}
		i++;
	}

	return (s);
}
