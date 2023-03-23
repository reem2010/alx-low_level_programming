#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
			_putchar (c);
	}
	_putchar ('\n');
}
