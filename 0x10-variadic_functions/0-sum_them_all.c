#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list num;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(num, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(num, int);
	va_end(num);
	return (sum);
}
