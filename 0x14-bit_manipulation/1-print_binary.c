#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int size = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	temp = n;
	while (temp)
	{
		temp = temp >> 1;
		size++;
	}
	while (size)
	{
		_putchar((int)('0' + ((n >> (size - 1)) & 1)));
		size--;
	}
}
