#include "function_pointers.h"
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if ((action != NULL) && (array != NULL))
		for (i = 0; i < (int)size; i++)
			(*action) (array[i]);
}
