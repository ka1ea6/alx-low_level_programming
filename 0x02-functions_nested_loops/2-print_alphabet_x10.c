#include "main.h"

/**
 * print_alphabet_10x - Prints the alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_10x(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
