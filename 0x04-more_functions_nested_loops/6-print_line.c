#include "main.h"

/**
 * print_line - prints a line with a length of n
 * @n: length of line
 * Return: no Return
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
