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
	if (len % 2)
	{
		for (i = (len - 1) / 2; i < len; i++)
			_putchar (str[i]);
	}
	else
	{
		for (i = len / 2; i < len; i++)
			_putchar (str[i]);
	}
	_putchar ('\n');
}
