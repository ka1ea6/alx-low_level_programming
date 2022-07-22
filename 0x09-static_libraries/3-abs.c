#include <stdio.h>
#include "main.h"

/**
 * _abs - returns the absolute value of the input
 *
 * @n: input number to compute absolute value.
 *
 * return: absolute value of n
 */

int _abs(int n)
{
	if (n > 0)
	{
		return n;
	}
	else {
		return n * -1;
	}
}
