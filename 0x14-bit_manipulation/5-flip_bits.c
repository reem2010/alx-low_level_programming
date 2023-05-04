#include "main.h"
/**
 * flip_bits - calculate the number of bits you would need to
 * flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	unsigned int res = 0;

	temp = n ^ m;
	while (temp)
	{
		if ((temp & 1) == 1)
			res++;
		temp = temp >> 1;
	}
	return (res);


}
