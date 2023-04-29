#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: head of the list
 * @n: integer
 * Return: pointer to node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}

