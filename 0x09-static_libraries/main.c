#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char str1[100] = "\"At the end of the day, my goal was to be the best";
	char *str2 = " hacker\"\n\t- Kevin Mitnick";
	char *dest = _strcat(str1, str2);

	_puts(dest);
	return (0);
}
