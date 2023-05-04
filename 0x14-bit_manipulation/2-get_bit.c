#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: index of the number
 * Return: the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	if (index > 63)
		return (-1);
	res = (n >> index) & 1;
	return (res);
}
