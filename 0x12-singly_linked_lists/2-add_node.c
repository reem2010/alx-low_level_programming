#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: head of list
 * @str the string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = malloc(strlen(str) + 1);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	for (i = 0; i <= strlen(str); i++)
		(node->str)[i] = str[i];
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (*head);
}
