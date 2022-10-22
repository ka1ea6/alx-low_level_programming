#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * to the hash table
 *
 * @ht: hash table to store key value pairs
 * @key: the key with which to store the value
 * @value: the value pointed to by key
 *
 * Return: 1 if successful, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));

	new->value = strdup(value);
	new->key = strdup(key);
	new->next = NULL;

	index = key_index((const unsigned char *) key, ht->size);

	if (!ht->array[index])
	{
		ht->array[index] = new;
		return (1);
	}

	temp = malloc(sizeof(hash_node_t));
	if (!temp)
	{
		free(new);
		return (0);
	}
	
	temp = ht->array[index];

	while(temp->next)
		temp = temp->next;

	temp->next = new;

	return (1);
}
