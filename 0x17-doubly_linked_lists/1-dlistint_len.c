#include "lists.h"
/**
 * dlistint_len -  returns the number of elements
 * @h: head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t size = 0;

	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
