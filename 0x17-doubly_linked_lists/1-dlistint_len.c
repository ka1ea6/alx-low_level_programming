#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list.
 *
 * @h: pointer to the head of the list
 * Return: the number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}
