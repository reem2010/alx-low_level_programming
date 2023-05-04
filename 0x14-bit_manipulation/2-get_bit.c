#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: index of the number
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;
	unsigned int size = 0;
	int res;

	if ((n == 0) && (index == 0))
		return (0);
	else if ((n == 0) && (index > 0))
		return (-1);
	temp = n;
	while (temp)
	{
		temp = temp >> 1;
		size++;
	}
	if (index > 63)
		return (-1);
	res = (n >> index) & 1;
	return (res);
}
