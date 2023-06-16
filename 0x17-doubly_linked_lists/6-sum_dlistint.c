#include "lists.h"
/**
 * sum_dlistint - sum all the data
 * @head: head
 * Return:  returns the sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
