#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: the name
 * @f: pointer to a functio
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
