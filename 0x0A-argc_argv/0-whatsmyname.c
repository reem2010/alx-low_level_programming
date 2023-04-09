#include <stdio.h>
/**
 * main - Entry point
 * @argc: the number of command arguments
 * @argv: array containing a program command line arguments
 * Return: Always 0 (Success)
 */
int main (int argc, char *argv[])
{
	printf ("%s\n", argv[argc - 1]);
	return (0);
}
