/**
* _strcmp -  compares two strings.
* @s1: to string to compare.
* @s2: the string to compare to.
*
* Return: 0 if s1 = s2, a non 0 integer otherwise.
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
