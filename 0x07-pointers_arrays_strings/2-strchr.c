#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer
 * @c: character c in the string s
 * Return: return location
 */
char *_strchr(char *s, char c)
{
	int i;
	int found;

	i = 0;
	found = 0;
	if ((*s != '\0') && (c != '\0'))
	{
		while (s[i])
		{
			if (s[i] == c)
			{
				found++;
				break;
			}
			i++;
		}
		if (found == 1)
		{
			return (s + i);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
