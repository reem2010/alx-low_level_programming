#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main -  multiplies two positive numbers
 * @argc: the number of command arguments
 * @argv: array containing a program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	printf ("%d",atoi(argv[1]));
	return (0);

}
