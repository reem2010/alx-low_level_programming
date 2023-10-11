#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array of integers
 * @array: the array
 * @size: size of the array
 * @value: the value we are searching for
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = value - array[low];
		pos = low + (((double)(high - low) / (array[high] - array[low])) * pos);
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;


	}
	return (-1);
}
