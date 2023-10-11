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
	while (start <= end)
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
	return (-1);

}
/**
 * exponential_search - searches for a value in an array of integers
 * @array: the array
 * @size: size of the array
 * @value: the value we are searching for
 * Return: first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t p = 1, end;
	int res;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while ((p / 2) < size)
	{
		if (p < size && value > array[p])
		{
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
			p = p * 2;
		}
		else
		{
			end = p < size ? p : size - 1;
			printf("Value found between indexes [%lu] and [%lu]\n", p / 2, end);
			res = binary_search(&array[p / 2], end - (p / 2) + 1, value);
			res = res < 0 ? -1 : res + (int)(p / 2);
			return (res);
		}
	}
	return (-1);
}
