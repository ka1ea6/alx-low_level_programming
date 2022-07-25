#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: size of array to be created
 * @c: character used to initialize array
 *
 * Return: pointer to the created array if size > 0,
 * NULL otherwise.
 */
char *create_array(unsigned int size, char c)
{
	char *malPointer;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}
	malPointer = malloc(sizeof(c) * size);
	if (malPointer == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		malPointer[i] = c;
		i++;
	}

	return (malPointer);
}
