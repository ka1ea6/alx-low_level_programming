#include "ops.h"

/**
 * div - divides two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: result of dividing first number by second
 * number if successful, 0 if not.
 */

int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a/b);
}
