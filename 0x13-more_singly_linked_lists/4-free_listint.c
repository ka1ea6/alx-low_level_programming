#include "lists.h"

/**
 * free_listint - frees a linked list from memory
 *
 * @head: head of the linked list.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	if (!head)
		return;

	while (head->next)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
	free(curr);
	if (head)
		free(head);
}
