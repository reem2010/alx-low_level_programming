#include "lists.h"
/**
 * insert_dnodeint_at_index - insert at index
 * @h: head
 * @idx: index
 * @n: data
 * Rerurn: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t size = 0, i;
	dlistint_t *temp, *new, *temp2;

	temp = *h;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	temp = *h;
	if (idx > size)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == size)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	temp2 = temp->next;
	new->n = n;
	temp->next = new;
	new->prev = temp;
	new->next = temp2;
	temp2->prev = new;
	return (new);
}
