#include "lists.h"

/**
 * add_nodeint - adds a node at the head of a
 * linked list.
 *
 * @head: pointer to the head of the linked list.
 * @n: value to be stored in the new node.
 *
 * Return: the new node create or null if error.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		printf("Error\n");
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
