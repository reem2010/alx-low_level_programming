#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i++])
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
}
