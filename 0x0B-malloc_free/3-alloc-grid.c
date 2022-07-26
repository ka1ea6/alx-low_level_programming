#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers.
 *
 * @width: int representing the width of the 2D array.
 * @height: int representing the height of the 2D array.
 *
 * Return: pointer to a 2D array if successful, NULL otherwise.
 */

int **alloc_grid(int width, int height)
{
	int **matPointer;
	int i, j;

	matPointer = malloc(sizeof(int*) * width);
	for (i = 0; i < width; i++)
	{
		matPointer[i] = malloc(sizeof(int) * height);
	}
	if (matPointer == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			matPointer[i][j] = 0;
		}
	}
	return (matPointer);
}
	
