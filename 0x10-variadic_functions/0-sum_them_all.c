#include <stdarg.h>

/**
 * sum_them_all - accepts a variable number of inputs
 * and returns their sum
 *
 * @n: first argument.
 *
 * Return: sum of numbers if valid, otherwise 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(vlist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(vlist, int);
	va_end(vlist);
	return (sum);
}
