#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 *
 * @n: the number for which we print times table
 *
 */

void print_times_table(int n)
{
	int j;
	int num;
	int i;
	int m;


	m = 0;
	if (n <=  15 && n >= 0)
	{
		for (i = 0; i <= n; n++)
		{
			for (j = 0; j <= n; j++)
			{
				num = j * m;
				if (j != n)
				{
					if ((num / 10) == 0)
						printf(" %d, ", num);
					else
						printf("%d, ", num);
				}
				else
					printf("%d", num);
			}
			printf("\n");
			m = m + 1;
		}
	}






}
