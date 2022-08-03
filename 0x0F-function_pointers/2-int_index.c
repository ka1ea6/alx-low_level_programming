#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns index of the element that
 * fulfilles the condition of the passed cmp funciton
 *
 * @array: array to be checked.
 * @size: size of array to be checked.
 * @cmp: function used for comparing values.
 *
 * Return: index of first matching index, -1 otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}

	return (-1);
}
