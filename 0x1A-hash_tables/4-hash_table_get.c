#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 *
 * @ht: the hash table to look into
 * @key: the key to which the value is associated
 *
 * Return: value associated with element or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((unsigned const char *) key, ht->size);

	if (!ht->array[index])
		return (NULL);

	return (ht->array[index]->value);
}
