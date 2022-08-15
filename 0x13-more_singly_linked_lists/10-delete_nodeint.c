#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int count;

	if (!(*head))
		return (-1);

	curr = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(curr);
		return (1);
	}

	count = 0;
	while (count != (index) && curr)
	{
		temp = curr;
		curr = curr->next;
		count++;
	}
	if (count != index)
	{
		free(temp);
		return (-1);
	}

	temp->next = curr->next;
	free(curr);
	return (1);
}
