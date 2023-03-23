#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (! (n <= 0))
	{
		for (i = 0; i <n; i++)
		{
			for (j = 0; j < (n - 1); j++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}



}
