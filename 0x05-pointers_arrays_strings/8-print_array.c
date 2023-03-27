#include "main.h"
/**
 * print_array -  prints n elements of an array
 * @a: pointer to array
 * @n:  number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar (a[i]);
		if (i != (n - 1))
		{
			_putchar (',');
			_putchar (' ');
		}
	}
	_putchar ('\n');
}
