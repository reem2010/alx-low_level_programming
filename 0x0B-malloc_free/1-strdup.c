#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns a pointer to a new string which is a duplicate of the string str
 * @str: string to be copied
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *p;

	size = strlen(str);
	p = (char *)malloc(size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
