#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp, *temp1;

	if (!ht)
		return;

	while (index < ht->size)
	{
		temp = (ht->array)[index];
		while (temp)
		{
			free(temp->key), 
			free(temp->value);
			temp1 = temp->next;
			free(temp);
			temp = temp1;

		}
		index++;
	}
	free(ht->array);
	free(ht);
}
