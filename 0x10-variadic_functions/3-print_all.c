#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0, s = 0;
	va_list data;
	char *p;

	va_start(data, format);
	while (format[i] && (format != NULL))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(data, int));
				s = 1;
				break;
			case 'i':
				printf("%d", va_arg(data, int));
				s = 1;
				break;
			case 'f':
				printf("%f", va_arg(data, double));
				s = 1;
				break;
			case 's':
				p = va_arg(data, char *);
				if (p == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				s = 1;
				break;
			default:
				s = 0;
		}
		if ((format[i + 1] != '\0') && (s == 1))
			printf(", ");
		i++;
		s = 0;
	}
	printf("\n");
	va_end(data);
}
