#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to first element of string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		len = len + 1;
		s = s + 1;
	}
	return (len);
}

