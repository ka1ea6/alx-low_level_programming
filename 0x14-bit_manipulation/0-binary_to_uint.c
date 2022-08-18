#include "main.h"

/**
 * binary_to_uint - converts binary in string to
 * unsigned int.
 *
 * @b: pointer to string.
 * Return: integer representation of the binary
 * if successful, 0 otherwise.
 */

unsigned int binary_to_uint(const char *b)
{
	int count, res, length;

	if (!b)
		return (0);
	count = 0;
	while (b[count] != '\0')
	{
		if (b[count] == '0' || b[count] == '1')
			count++;
		else
			return (0);
	}
	length = count;
	res = 0;
	while (count >= 0)
	{
		if (b[count] == '0')
		{
			count--;
			continue;
		}
		else if (b[count] == '1')
		{
			res += power(2, (length - count));
		}
		count--;
	}

	return (res / 2);
}

/**
 * power - returns the result of multiplying
 * the base a times.
 *
 * @base: the base of the power eqn.
 * @a: the number used as a multiplier.
 *
 * Return: the result of multiplying the base a times.
 */

int power(int base, int a)
{
	if (a != 0)
		return (base * power(base, a - 1));
	else
		return (1);
}
