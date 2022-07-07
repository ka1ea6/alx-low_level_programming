#include "main.h"

/**
 * print_triangle - prints a triangle with height n
 * @n: height of triangle
 * Return: no Return
 */
void print_triangle(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1 ; j <= n; ++j)
			{
				if ((i + j) <= n)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
