#include "lists.h"
/**
 * get_dnodeint_at_index - get node
 * @head: head
 * @index: the index
 * Return:  returns the nth node 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t size = 0, i;

	temp = head;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	if (index > size - 1)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;
	return (temp);
}


