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
		for (i = 0; i < n; i++)
		{
			for (j = 0 ; j < (n - i); j++)
			{
				_putchar(' ');
			}
			for (j--; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
