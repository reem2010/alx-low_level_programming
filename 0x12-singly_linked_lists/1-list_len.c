#include "lists.h"
/**
 * list_len - number of elements in a linked list
 * @h: head of the list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
