#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new index at a given
 * position.
 *
 * @h: pointer to the head of the list.
 * @idx: index of the list where the new node is to be added
 * @n: value of the node to be added.
 * Return: address of the new node if sucess, NULL if not.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int cur_idx;

	if (!*h && idx > 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*h && idx == 0)
		return (new);
	cur_idx = 0;
	curr = *h;
	while (curr)
	{
		if (cur_idx == idx)
		{
			new->next = curr;
			new->prev = curr->prev;
			new->prev->next = new;
			curr->prev = new;
			return (new);
		}
		curr = curr->next;
		cur_idx++;
	}

	return (NULL);
}


