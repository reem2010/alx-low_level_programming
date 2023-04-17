#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*(s+1) != '\0')
		sum = 1 + _strlen_recursion(s + 1);
	else 
		return (1);
	return (sum);
}
