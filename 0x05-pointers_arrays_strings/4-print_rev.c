#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 * @s: pointer to string
 */
void print_rev(char *s)
{
	char *p;
	int len;
	int i;

	p = s;
	len = 0;
	while (*p)
	{
		len = len + 1;
		p = p + 1;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar (*(s + i));
	}
	_putchar ('\n');
}
