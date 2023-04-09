#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: the number of command arguments
 * @argv: array containing a program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	i = 0;
	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			i = 0;
			while (argv[j][i])
			{
				if (!((argv[j][i] >= 48) && (argv[j][i] <= 57)))
				{
					printf("Error\n");
					return (1);
				}
				i++;
			}
		}
		for (j = 1; j < argc; j++)
		{
			sum = sum + atoi(argv[j]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
