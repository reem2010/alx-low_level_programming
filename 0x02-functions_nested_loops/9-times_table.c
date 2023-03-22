#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 */

void times_table(void)
{
	int n;
	int m;
	int num;
	int i;

	m = 0;
	for (i = 0; i <= 9; i++)
	{
		for (n =0; n <= 9; n++)
		{
			num = n * m;
			if ((num / 10) != 0)
				_putchar('0' + (num / 10));
			else
			{
				if (n != 0)
					 _putchar (' ');
			}

			_putchar('0' + (num % 10));
			if (n != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
		m = m + 1;
	}
}

