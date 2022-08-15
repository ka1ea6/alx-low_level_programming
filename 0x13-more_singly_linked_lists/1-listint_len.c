#include "lists.h"

/**
 * listint_len - calculates the length of a linked
 * list.
 *
 * @h: head of the linked list.
 * Return: size of the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}

	return (size);
}
