#include "main.h"

/**
 * _putchar - writes the character a to stdout
 * @a: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}