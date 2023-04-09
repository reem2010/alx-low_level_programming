#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pinter
 * @n: number of bytes
 * @b: constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *p;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
