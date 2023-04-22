#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"


/**
* print_all - function that prints anything.
* @format: list of types of arguments passed to the function
* @...: variadic function operator
*
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, n = 0;
	char *s;

	va_start(ap, format);
	while (format != NULL && format[n] != '\0')
		n++;

	while (i < n)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("%s", "(nil)");
				break;
			}
			printf("%s", s);
			break;
		}

		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && i < n - 1)
			printf(", ");
		i++;
	}

	va_end(ap);
	printf("\n");
}
