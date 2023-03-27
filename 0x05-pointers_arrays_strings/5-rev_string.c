#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to string
 */
void rev_string(char *s)
{
	char temp;
	int len;
	int i;

	i = 0;
	len = 0
	while (s[i++])
	{
		len++;
	}
	for (i = len - 1; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

