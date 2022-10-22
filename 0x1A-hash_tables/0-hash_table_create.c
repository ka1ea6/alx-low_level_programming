#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 *
 * @size: size of the hash table to be created.
 * Return: the created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t *new_elements;

	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_elements = malloc(sizeof(hash_node_t) * size);

	if (!new_elements)
		return (NULL);

	new_table->array = &new_elements;
	
	free(new_elements);

	return new_table;
}
