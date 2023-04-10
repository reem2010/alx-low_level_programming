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
	int res;
	int coins[5] = {25, 10, 5, 2, 1};
	int num;
	int i;

	res = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (num >= coins[i])
		{
			res = res + (num / coins[i]);
			num = num % coins[i];
		}
	}
	printf("%d\n", res);
	return (0);
}
