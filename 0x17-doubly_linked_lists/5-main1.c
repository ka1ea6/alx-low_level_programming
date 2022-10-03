#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, -12);
    add_dnodeint_end(&head, 6);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 1);
    printf("%d\n", node->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
