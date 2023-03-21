#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int r;


	r = n % 10;
	if (r < 0)
		r = 0 - r;
	_putchar('0' + r);
	return (r);
}
