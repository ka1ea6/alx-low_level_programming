#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list.
 *
 * @head: pointer to the head of the lineked list.
 * @n: value of the new node to be added to the linked list.
 *
 * Return: new node created if successful, null otherwise.
 */
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
