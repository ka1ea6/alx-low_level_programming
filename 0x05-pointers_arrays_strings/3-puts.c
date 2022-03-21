#include "main.h"

/**
 * _puts - prints the string str followed by new line.
 *
 * @str: the string to be printed.
 *
 * Return: no return.
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
