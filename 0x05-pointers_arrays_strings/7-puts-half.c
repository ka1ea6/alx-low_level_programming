#include "main.h"

/**
 * puts2 - prints every other character of a string.
 *
 * @str: the string to print.
 *
 * Return: no return.
 */
void puts2(char *str)
{
	int count = 0, n;

	while (*(str + count) != '\0')
	{
		count++;
	}
	n = (count - 1) / 2;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
}
