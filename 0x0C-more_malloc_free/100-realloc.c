#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - eallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @new_size: new size, in bytes of the new memory block
 * @old_size: the size, in bytes, of the allocated space for ptr
 * Return: pointer to a new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	int i, n;

	if ((new_size == 0))
	{
		if (ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
		else
			return (NULL);
	}
	if (ptr != NULL)
	{
		if (old_size == new_size)
			return (ptr);
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		if (old_size < new_size)
			n = old_size;
		else
			n = new_size;
		for (i = 0; i < n; i++)
			*(p + i) = *((char *)ptr + i);
		free(ptr);
	}
	else
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	return (p);
}
