#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory block
 * to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
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

	_memset(newArr, 0, nmemb * size);

	return (newArr);
}
