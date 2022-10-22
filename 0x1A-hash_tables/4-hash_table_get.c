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
	hash_node_t *temp;
	unsigned long int index;

	index = key_index((unsigned const char *) key, ht->size);

	if (!ht->array[index])
		return (NULL);
	
	if (strcmp(ht->array[index]->key, key) == 0)
	{
		printf("\nhere\n");
		return (ht->array[index]->value);
	}

	temp = malloc(sizeof(hash_node_t));

	if (!temp)
		return (NULL);

	temp = ht->array[index];
	while (temp->next)
	{
		printf("\nChecking %s:%s", temp->key, temp->value);
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
