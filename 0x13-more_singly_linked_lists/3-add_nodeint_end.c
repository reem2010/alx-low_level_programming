#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end
 * @head: head of the list
 * @n: integer
 * Return: pointer to node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	temp = *head;
	while (temp && temp->next)
		temp = temp->next;
	node->n = n;
	node->next = NULL;
	if (temp)
		temp->next = node;
	else
		*head = node;
	return (node);
}
