#include <stdio.h>
/**
 * main - Entry point
 * @argc: the number of command arguments
 * @argv: array containing a program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
