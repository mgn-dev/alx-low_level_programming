/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest.
* @dest: destination buffer
* @src: source string
*
* Return: destination buffer
*/
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p);
}
