#include "main.h"

/**
 * _strlen - takes a pointer to a sting as input and returns the length
 * of the string.
 *
 * @s: string pointer.
 *
 * Return: nothing
 */
void _puts(char *s)
{
	int i = 0;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[i]);
	}
}
