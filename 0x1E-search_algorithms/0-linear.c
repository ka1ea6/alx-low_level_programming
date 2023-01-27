#include "search_algos.h"

/**
 * linear_search - Function to search an integer array using the linear
 * search algorithm
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * Return: The index of the first occurance of value in array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	if (!array)
		return (-1);

	for (iter = 0; iter < size; iter++)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, array[iter]);

		if (array[iter] == value)
		{
			return (iter);
		}
	}
	return (-1);
}
