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

	if (n <= 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (sep && i < (n - 1))
			printf("%s", sep);

	}

	printf("\n");

	va_end(ap);
}
