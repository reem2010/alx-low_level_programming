#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: input string
 * @accept: string to compare
 * Return:  pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int found;

	i = 0;
	found = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found == 1)
			break;
		i++;
	}
	if (found == 1)
		return (s + i);
	else
		return (NULL);
}

