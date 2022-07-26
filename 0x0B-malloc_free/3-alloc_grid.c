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

	if (width <= 0 || height <= 0)
		return (NULL);
	
	matPointer = malloc(sizeof(int *) * width);
	if (matPointer == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		matPointer[i] = malloc(sizeof(int) * height);
		if (matPointer[i] == NULL)
		{
			while (i >= 0)
			{
				free(matPointer[i]);
				i--;
			}
			free(matPointer);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			matPointer[i][j] = 0;
	}
	return (matPointer);
}
