#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns a pointer to the allocated space if the
 * passed argument is valid.
 * @b: size of the allocated memory.
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
