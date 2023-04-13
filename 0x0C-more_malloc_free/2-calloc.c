#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements in the array
 * size: size of elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	return (p);
}
	
