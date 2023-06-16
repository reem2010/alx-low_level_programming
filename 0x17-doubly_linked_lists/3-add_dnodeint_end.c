#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: new element
 * Return: the address of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (temp && temp->next)
		temp = temp->next;
	new->n = n;
	new->next = NULL;
	if (temp)
		temp->next = new;
	else
		*head = new;
	return (new);
}

