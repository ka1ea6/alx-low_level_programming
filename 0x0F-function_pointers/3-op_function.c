#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - returns the sum of the passed arguments
 *
 * @a: first int
 * @b: secont int
 *
 * Return: sum of the passed arguments, null otherwise.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of the arguments.
 *
 * @a: first int to be operated on.
 * @b: second int to be operated on.
 *
 * Return: returns the differenct of the passed arguments.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 *
 * @a: first int
 * @b: second int
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b.
 *
 * @a: dividend.
 * @b: divisor.
 * Return: dividend divided by divisor.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b.
 *
 * @a: dividend.
 * @b: divisor.
 *
 * Return: return the remainder of the division.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
