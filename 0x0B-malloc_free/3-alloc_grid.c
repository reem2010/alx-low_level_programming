#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: returns a pointer to a 2 dimensional array of integers
 */
int *p[100];
int **alloc_grid(int width, int height)
{
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		p[i][j] = 0;
	}
	return (p);
}
