#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at the given index.
 *
 * @head: head of the linked list.
 * @index: index of the required value.
 *
 * Return: node at the index if successful, null otherwise.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *curr;

	if (!head)
		return (NULL);

	count = 0;
	curr = head;
	while (count < index && curr)
	{
		curr = curr->next;
		count++;
	}

	if (count == index)
		return (curr);
	return (NULL);
}
