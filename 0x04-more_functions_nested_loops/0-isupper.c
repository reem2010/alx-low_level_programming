#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the charachter to be checked
 * Return: 1 if lower
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
