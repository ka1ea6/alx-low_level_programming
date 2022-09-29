#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 *
 * @h: pointer to a doubly linked list
 * Return: size of the printed list
 */

size_t print_dlist(const dlistint_t *h)
{
	size_t size;

	size = 0;

	while(h)
	{
		printf("%d", h->n);
		h = h->next;
		size++;
	}

	return size;
}
