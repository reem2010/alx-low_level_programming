#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n bytes of s2
 * Return: pointer to a string the concatenate s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2;
	char *p;

	size1 = 0;
	size2 = 0;
	if ((s1 != NULL) && (s2 != NULL))
	{
		size1 = strlen(s1);
		size2 = strlen(s2);
	}
	else if (s1 != NULL)
		size1 = strlen(s1);
	else if (s2 != NULL)
		size2 = strlen(s2);
	if (n >= size2)
		n = size2;
	p = (char *) malloc(size1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (i = 0; i < n; i++)
		p[i + size1] = s2[i];	
	p[i + size1] = '\0';
	return (p);
}
