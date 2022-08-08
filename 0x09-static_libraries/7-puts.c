#include "main.h"

/**
 * _puts - prints the char passed to the function
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
