#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1);
    hash_table_set(ht, "hetairas", "cool");
    hash_table_set(ht, "mentioner", "is cool");
    return (EXIT_SUCCESS);
}
