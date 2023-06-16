#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head
 * @n: new element
 * Return: the address of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp;
	new->prev = NULL;
	*head = new;
	return (new);
}

