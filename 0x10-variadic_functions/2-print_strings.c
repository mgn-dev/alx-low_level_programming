#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
* print_strings - function that prints strings, followed by a new line.
* @separator: the string to be printed between the strings
* @n: the number of strings passed to the function
* @...: variadic args operator
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (s == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

	}

	va_end(ap);
	printf("\n");
}
