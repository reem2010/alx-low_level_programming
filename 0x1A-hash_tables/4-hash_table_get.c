#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: the key
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index =  key_index((const unsigned char *)key, ht->size);
	if (!(ht->array)[index])
		return (NULL);
	return (((ht->array)[index])->value);
}
