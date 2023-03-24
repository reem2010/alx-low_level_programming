#include "main.h"
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
	
	z = 1;
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
			if (num != 0)
				z = z * 10;
		}
		for (i = 1; i < ind; i++)
		{
			dig = n / z;
			_putchar ('0' + dig);
			n = n % z;
			z = z / 10;
		}
	}
	_putchar ('0' + n);
}





