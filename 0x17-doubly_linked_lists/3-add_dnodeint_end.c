#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 *
 * @head: pointer to the head of the list.
 * @n: value of the new node to be inserted.
 *
 * Return: The address of the new element or null.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *end = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	
	while (end->next != NULL)
	{
		end  = end->next;
	}

	end->next = new;
	new->prev = end;

	return (new);
}
	
