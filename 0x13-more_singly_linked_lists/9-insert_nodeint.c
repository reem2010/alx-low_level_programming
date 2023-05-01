#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @idx: index
 * @n: data
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	listint_t *temp1;
	unsigned int i = 0, size = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	temp = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	if (idx > size)
		return (NULL);
	temp = *head;
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	temp1 = temp->next;
	temp->next = new_node;
	new_node->next = temp1;
	return (new_node);
}
