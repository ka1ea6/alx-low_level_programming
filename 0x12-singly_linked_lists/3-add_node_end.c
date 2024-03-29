#include "lists.h"

/**
 * add_node_end - adds a node at the end of a
 * linked list.
 *
 * @head: head of the linked list.
 * @str: string value to be added to linked list.
 * Return: pointer to added node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new,  *curr;
	size_t strlen = 0;

	while (str[strlen] != '\0')
		strlen++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	curr = malloc(sizeof(list_t));
	if (!curr)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen;
	new->next = NULL;

	if (*head == NULL)
		*head = new;


	else
	{
		curr = *head;

		while (curr->next)
		{
			curr = curr->next;
		}
	}


	(curr)->next = new;

	return (new);
}
