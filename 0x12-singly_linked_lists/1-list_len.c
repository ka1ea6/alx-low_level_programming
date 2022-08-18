#include "lists.h"

/**
 * list_len - returns the length of the printed
 * linked list.
 *
 * @h: pointer to the head of the linked list.
 * Return: length of the linked list.
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
