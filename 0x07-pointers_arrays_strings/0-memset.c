/**
* *_memset - fills memory with a constant byte.
* @s: initial memory address to fill
* @b: byte to use to fill memory
* @n: number of bytes
*
* Return: pointer to memory area.
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p++ = b;
		n--;
	}

	return (s);
}
