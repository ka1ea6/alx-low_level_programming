#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *curr;
	
	if (!(*head))
		return;
	

	while ((*head)->next)
	{
		curr = (*head)->next;
		free((*head));
		(*head) = curr;
	}
	free(curr);
	(*head) = NULL;
	return;
}
