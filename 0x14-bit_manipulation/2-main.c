#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(3, 2);
    printf("%d\n", n);
    n = get_bit(3, 1);
    printf("%d\n", n);
    n = get_bit(3, 0);
    printf("%d\n", n);
    return (0);
}
