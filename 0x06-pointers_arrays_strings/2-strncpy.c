/**
* *_strncpy -   copies a string.
* @dest: destination string to copy to.
* @src: source string to copy from
* @n: number of chars to copy.
*
* Return: a pointer to destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
