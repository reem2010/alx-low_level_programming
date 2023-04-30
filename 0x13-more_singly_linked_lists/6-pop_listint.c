#include "lists.h"
/**
 * pop_listint - deletes and return the head node
 * @head: head of list
 * Return: return the head node
 */
int pop_listint(listint_t **head)
{
	int res = 0;
	listint_t *temp;

	if (*head)
	{
		temp = (*head)->next;
		res = (*head)->n;
		free(*head);
		(*head) = temp;
	}
	return (res);
}

