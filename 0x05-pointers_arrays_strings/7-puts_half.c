#include "main.h"

/**
 * puts_half - prints half of the string passed.
 *
 * @str: the string to print.
 *
 * Return: no return.
 */
void puts_half(char *str)
{
	int count = 0, n;

	while (*(str + count) != '\0')
	{
		count++;
	}
	if (count % 2)
		n = ((count) / 2) + 1;
	else
		n = (count) / 2;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
