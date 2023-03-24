#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @n: the integer to print
 */
void print_number(int n)
{
	int num, nth, size = 1, lD = n % 10;

	n /= 10;
	num = n;
	if (lD < 0)
	{
		lD *= -1, num *= -1, n *= -1;
		_putchar('-');
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			num /= 10, size *= 10;
		}
		while (size > 0)
		{
			nth = n / size;
			_putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	_putchar('0' + lD);
}
