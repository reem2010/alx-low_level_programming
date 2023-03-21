#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */

void jack_bauer(void)
{
	char a, b, c, d;

	for (a = 48; a <= 49; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (a = 48; a <= 57; d++)
				{
					_putchar (a);
					_putchar (b);
					_putchar (':');
					_putchar (c);
					_putchar (d);
					_putchar ('\n');
				}
			}
			if (a == '2' && b == 3)
				break;
		}
	}
}
