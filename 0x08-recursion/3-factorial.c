#include "main.h"
/**
 * factorial - calculate the factorial of a given number
 * @n: the number
 * Return: the factorial
 */
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
	{
		fact = n;
		fact = fact * factorial(n - 1);
	}
	return (fact);
}
