#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array with the passed size.
 *
 * @nmemb: number of elements in allocated array.
 * @size: the size each element.
 *
 * Return: pointer to the allocated array if valid, NULL otherwise.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *newArr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	newArr = malloc(nmemb * size);
	if (newArr == NULL)
		return (NULL);
	return (newArr);
}
