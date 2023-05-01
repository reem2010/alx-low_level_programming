#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: index
 * Return: 1 if it succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int size = 0, i = 0;
	listint_t *temp;
	listint_t *temp1;

	temp = *head;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	if (index >= size)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
		temp = temp->next;
	temp1 = temp->next;
	temp->next = (temp1)->next;
	free(temp1);
	return (1);
}
