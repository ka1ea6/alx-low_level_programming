#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the list.
 *
 * @head: pointer to the head of the list.
 * @n: the value of the new node.
 * Return: the address of the new element if successful, NULL
 * if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (new);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if ((*head) != NULL)
	{
		new->next = (*head);
		(*head)->prev = new;
	}

	*head = new;
	return (new);
}
