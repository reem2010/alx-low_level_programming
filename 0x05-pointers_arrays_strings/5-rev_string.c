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
	int i;

	p = s;
	while (*p)
	{
		len = len + 1;
		p = p + 1;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

