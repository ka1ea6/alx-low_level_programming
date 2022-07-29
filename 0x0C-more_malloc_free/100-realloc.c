#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory previously allocated
 * @old_size: size of allocated space for ptr
 * @new_size: size of the new memory block
 *
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr, *tempPtr;
	int i, n;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		free(ptr);
		return (newPtr);
	}
	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	else
		n = new_size;
	tempPtr = ptr;
	for (i = 0; i < n; i++)
		newPtr[i] = tempPtr[i];
	free(ptr);
	return (newPtr);
}
