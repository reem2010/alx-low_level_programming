#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 * @s: pointer to string
 * @accept: bytes to search for
 * Return: numer of pointers
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int num;

	i = 0;
	num = 0;

	while (s[i] != ';')
	{
		if (s[i] == 
