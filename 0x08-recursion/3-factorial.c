#include "main.h"

/**
 * factorial - prints the factorial of the number passed.
 *
 * @n: integer for which the factorial is calculated.
 *
 * Return: if n > 0 the factorial of n. else -1 for error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
