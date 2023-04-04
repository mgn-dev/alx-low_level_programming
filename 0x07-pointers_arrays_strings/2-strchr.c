/**
* *_strchr - locates a character in a string.
* @c: char to search for
* @s: string to search for char
*
* Return: Returns a pointer to s or NULL.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
