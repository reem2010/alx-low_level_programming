#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putcar(c);
		putchar('\n');
	}
	return (0);
}
