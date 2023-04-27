#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of the list
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;
	unsigned int i;

	temp = *head;
	while ((temp) && (temp->next))
		temp = temp->next;
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = malloc(strlen(str) + 1);
	if (node->str == NULL)
	{
		free(temp);
		free(node);
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
		(node->str)[i] = str[i];
	node->len = strlen(str);
	node->next = NULL;
	if (temp)
		temp->next = node;
	else
		*head = node;
	return (node);
}

