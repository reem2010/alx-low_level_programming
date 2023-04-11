#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to a string the concatenate s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, i;
	char *p;

	size1 = strlen(s1);
	size2 = strlen(s2);
	p = (char *)malloc(s1 + s2 + 1);
	if ((s1 == NULL || s2 == NULL) || (p == NULL))
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (i = size1; i < size2; i++)
	{
		p[i] = s1[i];
	}
	return (p);
}
