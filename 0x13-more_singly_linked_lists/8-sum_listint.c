#include "lists.h"

/**
 * sum_listint - calculates the sum of the values in the linked list.
 *
 * @head: head of the linked list.
 * Return: sum of the values held in the nodes of the linked list if
 * successful, 0 otherwise.
 */
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
