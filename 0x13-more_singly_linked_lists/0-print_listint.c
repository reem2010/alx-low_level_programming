#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: head of a list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int length;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
