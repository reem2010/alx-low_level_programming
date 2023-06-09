#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: value associated with the key.
 * Return: 1 if it succeeded
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *temp;

	if (ht == NULL || value == NULL)
		return (0);
	index =  key_index((const unsigned char *)key, ht->size);
	temp = (ht->array)[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			strcpy(temp->value, (char *)value);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = malloc(strlen(key) + 1);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = malloc(strlen(value) + 1);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (0);
	}
	strcpy(new->key, (char *)key);
	strcpy(new->value, (char *)value);
	new->next = (ht->array)[index];
	(ht->array)[index] = new;
	return (1);
}
