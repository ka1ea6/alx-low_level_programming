#include "lists.h"

/**
 * free_listint2 - frees the linked list including the head.
 *
 * @head: pointer to the head of the linked list.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (!(*head))
		printf("Freed");

	curr = (*head);
	while ((*head)->next)
	{
		curr = (*head)->next;
		free((*head));
		(*head) = curr;
	}
	free(curr);
	(*head) = NULL;
}
