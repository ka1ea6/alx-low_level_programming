#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n = 0;

	if (!(*head))
		return (n);

	n = (*head)->n;

	curr = (*head);
	(*head) = curr->next;
	free(curr);

	return (n);
}
