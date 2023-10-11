#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array of integers
 * @array: the array
 * @size: size of the array
 * @value: the value we are searching for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, m, i;

	if (!array)
		return (-1);
	m = sqrt(size);
	start = 0;
	end = start + m;
	while (end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (value <= array[end] && value >= array[start])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", start, end);
			for (i = start; i <= end; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
		else
		{
			start = start + m;
			end = end + m;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", start, end);
	for (i = start; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
