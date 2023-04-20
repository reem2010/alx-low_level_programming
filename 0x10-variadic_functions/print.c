#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - print charachter
 * @c: the input
 */
void print_c((char *) c)
{
	printf("%c", *c);
}
/**
 * print_i - print integers
 * @i: the input 
 */
void print_i((char *) i)
{
	printf("%d", atoi(i));
}
/**
 * print_s - print string
 * @s: the input
 */
void print_s(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_f - print float
 * @f: the input
 */
void print_f((char *)float f)
{
	printf("%f",f);
}
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	type_s fun[] = {
		{'c', print_c},
		{'i', print_i},
		{'s', print_s},
		{'f', print_f}
	};
	int i = 0;
	va_list data;
	int j = 0;

	va_start(data, format);
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == fun.data)
				(fun.p)(va_arg(data));
			j++;
		}
		i++;
	}
	va_end(data);



}
