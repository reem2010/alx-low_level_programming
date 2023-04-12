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
	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size = size + strlen(av[i]) + 1;
	}
	printf("%d", size);
	p = (char *)malloc(size);
	if (p == NULL)
		return (NULL);
for (i = 0; i < size; i = i + strlen(av[l-1]) + 1)
        {
                j = 0;
                while (av[l][j])
                {
                        p[i + j] = av [l][j];
                        j++;
                }
                p[i+j] = '\n';
                l++;
        }
	return (p);
}
