#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size = 0, base = 1, num = 0;
	int i;

	while (b && b[size])
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		size++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		num = num + ((b[i] - '0') * base);
		base = base * 2;
	}
	return (num);
}

