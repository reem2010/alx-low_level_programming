#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int found = 0;

	if ((array != NULL) && (cmp != NULL))
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			found = cmp(array[i]);
			if (found)
				return (i);
		}
		if (!found)
			return (-1);
	}
	return (-1);
}


