#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head
 * @index: the index
 * Return: 1 if it succeeded
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp1;
	size_t size = 0, i;

	temp = *head;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	if (index >= size)
		return (-1);
	temp = *head;
	if (!index)
	{
		temp1 = temp->next;
		free(temp);
		*head = temp1;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
		temp = temp->next;
	temp1 = (temp->next)->next;
	free(temp->next);
	temp->next = temp1;
	temp1->prev = temp;
	return (1);
}
