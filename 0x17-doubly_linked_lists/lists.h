#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @next: pointer to the next node
 * @prev: pointer to the previous node
 *
 * Description: doubly linked list node structure
 * for project
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *perv;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
#endif
