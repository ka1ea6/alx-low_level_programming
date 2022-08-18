#include "lists.h"

/**
 * print_listint - prints a linked list given the head.
 *
 * @h: head of the linked list.
 * Return: size of the printed linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}

	return (size);
}
