#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *curr;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		printf("Error\n");
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	curr = *head;
	while (curr->next)
	{
		curr = curr->next;
	}

	curr->next = newNode;

	return (newNode);
}
