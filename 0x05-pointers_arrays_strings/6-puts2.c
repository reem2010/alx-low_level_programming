#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: pointer to string
 */
void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;

	while (str[i++])
	{
		len = len + 1;
	}
	for (i = 0; i < len; i = i + 2)
		_putchar (str[i]);
	_putchar ('\n');
}
