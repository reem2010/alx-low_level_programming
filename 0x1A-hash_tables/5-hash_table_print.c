#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	int count = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	while (index < ht->size)
	{
		temp = (ht->array)[index];
		while (temp)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			count++;
			temp = temp->next;

		}
		index++;
	}
	printf("}\n");

}
