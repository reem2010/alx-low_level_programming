#include "main.h"
/**
 * swap_int - waps the values of two integers.
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
