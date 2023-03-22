#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int n;
	int m;
	
	m = 0;
	for (n =0; n <=9; n++)
	{
		for (n =0; n <=9; n++)
		{
			if ((n / 10) != 0)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			if (n != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
			_putchar ('\n');
		}
		m = m + 1;
	}
}

