#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at the given index
 * with the passed value.
 *
 * @head: head of the linked list.
 * @idx: index to insert node.
 * @n: value of the node to be inserted.
 *
 * Return: the new node inserted.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *curr, *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;

	if (!(*head))
	{
		newNode->next = NULL;
		return (newNode);
	}
	curr = (*head);

	count = 0;
	while (count != (idx - 1) && curr)
	{
		curr = curr->next;
		count++;
	}

	if (count != (idx - 1))
		return (NULL);
	newNode->next = curr->next;
	curr->next = newNode;

	return (newNode);
}

