#include "lists.h"

/**
 * print_list - prints a singly linked list.
 *
 * @h: pointer to the head of the linked list.
 * Return: size of the printed list.
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}
