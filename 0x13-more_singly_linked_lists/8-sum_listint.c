#include "lists.h"

int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	if (!head)
		return (sum);

	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
