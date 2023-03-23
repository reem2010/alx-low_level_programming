#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar (' ');
			}

			for (n = (size - i + 1); n <= size; n++)
			{
				_putchar ('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

