#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function that prints numbers, followed by a new line.
* @sep: the string to be printed between numbers
* @n: the number of integers passed to the function
*
*/
void print_numbers(const char *sep, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		(i < (n - 1)) ? ((sep) ? printf("%s ", sep) : printf(" ")) : printf("\n");
	}

	va_end(ap);
}
