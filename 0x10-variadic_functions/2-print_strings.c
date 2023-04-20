#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -  strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(num, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
