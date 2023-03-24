#include "main.h"
#include <math.h>

/**
 * print_number - prints an integer
 * @n: input
 */

void print_number(int n)
{
	int ind;
	int dig;
	int num;
	int i;
	int z;

	num = n;
	ind = 0;
	if (n < 0)
	{
		n = 0 - n;
		_putchar ('-');
	}
	if (n != 0)
	{
		while (num != 0)
		{
			ind = ind + 1;
			num = num / 10;
		}

		for (i = 1; i < ind; i++)
		{
			z= pow (10,(ind - i));
			dig = n / z;
			_putchar ('0' + dig);
			n = n % z;
		}
	}
	_putchar ('0' + n);
}





