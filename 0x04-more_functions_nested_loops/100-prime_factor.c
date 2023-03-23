#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n;
	int i;
	int j;
	int prime;
	int max;

	max = 0;

	n = 612852475143;

	for (i = 2; i <= (n / 2); i++)
	{
		if ((n % i) == 0)
		{
			for (j = i+1; j <= (i / 2); j++)
			{
				if ((i % j) == 0)
					break;
				prime = i;
			}
			if (prime >= max)
				max = prime;
		}
	}
	printf("%d", max);
}
