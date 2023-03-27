#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	char *p;
	char temp;
	int len;

	p = s;
	while (*p)
	{
		len = len + 1;
		p = p + 1;
	}
	p = s + len - 1;
	while ((p != s) && (s < p))
	{
		temp = *s;
		*s = *p;
		*p = temp;
		s = s + 1;
		p = p - 1;
	}
}

