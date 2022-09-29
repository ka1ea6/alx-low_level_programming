#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list.
 * @head: pointer to the head of the list to be freed.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return;

	if (!head)
		return;

	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	if (head)
		free(head);

	return;
}
