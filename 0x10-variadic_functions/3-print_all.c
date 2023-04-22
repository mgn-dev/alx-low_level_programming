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
	unsigned int i, j;
	char c;

	s_forms arr[] = {  {'c', (char)va_arg(ap, char)},
					{'i', (int)va_arg(ap, int)},
					{'f', (float)va_arg(ap, float)},
					{'s', (char *)va_arg(ap, char *)}}

	va_start(ap, n);

	while (format[i] != '\0')
	{
		c = format[i];
		j = 0;
		i++;
	}


	va_end(ap);
	printf("\n");
}
