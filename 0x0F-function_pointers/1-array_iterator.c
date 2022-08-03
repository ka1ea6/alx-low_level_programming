#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * on each element of an array
 *
 * @array: array on which the operation is done.
 * @size: size of the array to be operated on.
 * @action: function to be executed for every element
 * of the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int count;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (count = 0; count < (int)size; count++)
	{
		action(array[count]);
	}
}
