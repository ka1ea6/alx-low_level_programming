#include "main.h"

/**
 * _pow_recursion - prints the result of multiplying x y times.
 *
 * @x: the first nubmer
 * @y: the second number
 *
 * Return: if y > 0 result of x to the power of y. else -1 for error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
