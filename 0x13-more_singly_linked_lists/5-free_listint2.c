#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		(*head) = node;
	}
	(*head) = NULL;
}
