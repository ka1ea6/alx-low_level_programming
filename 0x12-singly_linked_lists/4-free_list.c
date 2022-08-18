#include "lists.h"

/**
 * free_list - frees a linked list.
 *
 * @head: pointer to the head of a linked list.
 * Return: nothing.
 */

void free_list(list_t *head)
{
	list_t *curr;
	
	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
