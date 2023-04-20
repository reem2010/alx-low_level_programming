#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 * @argc: the number of command arguments
 * @argv: array containing a program command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num;
/*	int (*p) (int, char **);*/
	int i;

/*	p = main;*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
/*	for (i = 0; i < num; i++)*/
	/*{*/
	/*	printf("%x",(int)*((p + i)));*/
		/*if (i != num - 1)*/
		/*	printf(" ");*/
	/*}*/
/*	printf("\n");*/
	return (0);
}
