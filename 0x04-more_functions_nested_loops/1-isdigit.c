#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the charachter to be checked
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
