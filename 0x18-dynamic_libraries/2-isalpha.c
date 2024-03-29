#include "main.h"

/**
 * _isalpha - shows 1 if the input is an alphabet,
 * all other characters result in printing of 0
 *
 * @c: The ASCII code of the character
 *
 * Return: 1 for alphabet. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
