#include <stdio.h>
/**
 * main - Entry point
 * @argc: the number of command arguments
 * @argv: array containing a program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int size;

	while (argv[argc - 1] != argv[0])
	{
		size++;
		argc--;
	}
	printf("%d\n", size;
	return (0);
}
