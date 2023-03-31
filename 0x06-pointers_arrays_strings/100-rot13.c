#include <stdio.h>
/**
* *rot13 - encodes a string using rot13.
* @s: string to encode
*
* Return: encoded string
*/
char *rot13(char *s)
{
	char *ulcl = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *code = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == ulcl[j])
			{
				s[i] = code[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
