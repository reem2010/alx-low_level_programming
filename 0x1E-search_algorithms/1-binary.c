#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * @array: the array
 * @size: size of the array
 * @value: the value we are searching for
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, middle, i;

	if (!array)
		return (-1);
	start = 0;
	end = size - 1;
	while (start != end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i != end)
				printf(", ");
			else
				printf("\n");
		}
		middle = (start + end) / 2;
		if (value < array[middle])
			end = middle - 1;
		else if (value > array[middle])
			start = middle + 1;
		else
			return (middle);
	}
	if (value == array[start])
		return (start);
	else
		return (-1);

}
