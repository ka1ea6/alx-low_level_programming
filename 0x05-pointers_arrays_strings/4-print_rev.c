#include "main.h"

/**
 * print_rev - prints the string str in reverse followed by new line.
 *
 * @str: the string to be printed.
 *
 * Return: no return.
 */
void print_rev(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		_putchar(*(str + count));
		count--;
	}
	_putchar('\n');
}
