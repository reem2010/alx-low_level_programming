#include "lists.h"
/**
 * sum_listint -  sum of all the data
 * @head: head of the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
