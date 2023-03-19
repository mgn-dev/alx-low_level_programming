#include <string.h>
#include <unistd.h>

/**
* main - prints a string to the standard error.
*
* Return: 1
*/
int main(void)
{
	const char *str1 = "and that piece of art is useful\"";
	const char *str2 = " - Dora Korpar, 2015-10-19\n";
	int str1_size = strlen(str1);
	int str2_size = strlen(str2);

	write(2, str1, str1_size);
	write(2, str2, str2_size);
	return (1);
}
