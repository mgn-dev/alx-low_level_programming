#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line.
* @seperator: the string to be printed between numbers
* @n: the number of integers passed to the function
* ...: variadic args operator
*
*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator != NULL && i < n - 1)
			printf("%s", seperator);

	}

	va_end(ap);
	printf("\n");
}
