#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n:  first n bytes of s2
 * Return: pointer to a string the concatenate s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1 = 0;
	char *p;

	if (n >= strlen(s2) && s2 != NULL)
		n = strlen(s2);
	if (s1 != Null)
		size1 = strlen(s1);
	if (s2 == NULL)
		n = 0;
	p = malloc(size1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (i = 0; i < n; i++)
	       	p[i + size1] = s2[i];
	return (p);
}


