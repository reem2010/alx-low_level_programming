#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: nuber of arguments
 * @av: arguments
 * Return: Returns a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, size, l, j;
	char *p;

	size = 0;
	j = 0;
	i = 0;
	l = 0;
	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size = size + strlen(av[i]) + 1;
	}
	p = (char *)malloc(size + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		j = 0;
		while ((av[l][j]))
		{
			p[i + j] = (char) av[l][j];
			j++;
		}

		p[i + j] = '\n';
		i = i + strlen(av[l]) + 1;

		l++;
	}
	return (p);
}
