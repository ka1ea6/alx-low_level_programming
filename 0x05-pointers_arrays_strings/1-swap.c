#include "main.h"

/**
 * swap_int - swaps the values of the values stored in the memory location
 * &a and &b
 * @a: variable to point to the address of the variable to be altered.
 * @b: variable to point to the address of the second variable.
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
