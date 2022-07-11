#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the array up to the specified index.
 *
 * @a: the array to be printed.
 *@n: the number of elements to print.
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", *(a + count));
		count++;
		if (count < n)
			printf(", ");
	}
	printf("\n");
}
