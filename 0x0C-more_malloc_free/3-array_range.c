#include "main.h"
#include <stdlib.h>

/**
 * array_range - returns pointer to an int array that
 * includs values from min to max in asending order.
 *
 * @min: minimum number
 * @max: maximum nubmer
 * Return: pointer to an array of integers if valid,
 * NULL otherwise.
 */

int *array_range(int min, int max)
{
	int *intArray;
	int i, len = 0;

	if (min > max)
		return (NULL);
	len = (max - min + 1);
	intArray = malloc(sizeof(int) * len);
	if (intArray == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		intArray[i] = min;
		min++;
	}
	return (intArray);
}

