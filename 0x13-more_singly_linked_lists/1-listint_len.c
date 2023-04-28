#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: head of the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int length = 0;

	while(h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
