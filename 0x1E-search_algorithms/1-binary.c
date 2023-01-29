#include "search_algos.h"

void print_int_array(int *array, size_t size, size_t lower, size_t higher);

/**
 * binary_search - Function to search for @value in @array using the
 * binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: size of the number of elements in array.
 * @value: value to search for.
 *
 * Return: index of value in array or -1 if it is not present in array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t high, low, mid;

	high = size;
	low = 0;

	if (!array)
		return (-1);

	while (low < high)
	{
		mid = (high + low - 1) / 2;

		printf("Searching in array: ");
		print_int_array(array, size, low, high);
		printf("\n");

		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
		else
			return (mid);
	}


	return (-1);
}

/**
 * print_int_array - Function to print an int array.
 *
 * @array: array to be printed.
 * @size: size of array to be printed.
 * @lower: lower limit to start printing.
 * @higher: higher limit to stop printing.
 *
 * Return: Noting.
 */

void print_int_array(int *array, size_t size, size_t lower, size_t higher)
{
	size_t count;

	for (count = 0; count < size; count++)
	{
		if (count >= lower && count < higher)
			printf("%d, ", array[count]);
		else if (count == higher)
			printf("%d ", array[count]);
		else if (count > higher)
			break;
	}
}
