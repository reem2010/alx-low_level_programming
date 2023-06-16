#include "lists.h"
/**
 * print_dlistint - print the elements of the list
 * @h: hread
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t size = 0;

	while (temp)
	{
		size++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (size);
}
