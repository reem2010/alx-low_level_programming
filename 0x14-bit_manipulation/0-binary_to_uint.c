#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size = 0, base = 1, i, num = 0;

	if (!b)
		return (0);
	while (b[size])
	{
		if (b[size] != '0' && b[size] != '1')
			return (0);
		base = base * 2;
		size++;
	}
	base = base / 2;
	for (i = 0; i < size; i++)
	{
		num = num + ((b[i] - '0') * base);
		base = base / 2;
	}
	return (num);
}

