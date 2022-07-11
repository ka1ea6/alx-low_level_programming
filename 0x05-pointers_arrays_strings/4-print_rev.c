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
	int index;

	for (index = 0; str[index] != '\0'; ++index)
		;
	for (--index; index >= 0; --index)
		_putchar(str[index]);
	_putchar('\n');
}
