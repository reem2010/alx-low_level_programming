#include "lists.h"
/**
 * free_dlistint - free list
 * @head: head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h, *temp;

	temp = head;
	while (temp)
	{
		h = temp;
		temp = temp->next;
		free(h);
	}
}
