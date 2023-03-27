#include "main.h"
/**
 * _puts - prints a string
 * @str: address of string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar (*str);
		str = str + 1;
	}
	_putchar ('\n');
}
