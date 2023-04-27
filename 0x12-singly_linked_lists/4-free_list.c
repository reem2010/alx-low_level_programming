#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the list
 */
void free_list(list_t *head)
{
	list_t node;

	node = head;
	while (head)
	{
		node = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = node;
	}
}

