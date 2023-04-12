#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - function that splits a string into words
 * @str: string to be splitted
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **p;
	int i, j, row, size, l;

	l = 0;
	row = 0;
	while (str[l])
	{
		if ((str[l] != ' ') && (((str[l + 1]) == ' ') || ((str[l + 1]) == '\0')))
			row++;
		l++;
	}
	p = (char **)malloc((sizeof(char *) * (row + 1)));
	if (p == NULL)
		return (NULL);
	l = 0;
	for (i = 0; i < row; i++)
	{
		size = 0;
		while (str[l] == ' ')
			l++;
		while ((str[l] != ' ') && (l < (int)strlen(str)))
		{
			size++;
			l++;
		}
		p[i] = (char *)malloc(size + 1);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < size; j++)
			p[i][j] = str[l - size + j];
	}
	return (p);
}
