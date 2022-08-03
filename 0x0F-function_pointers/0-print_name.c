#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints the string passed by a callback
 * using the pointer to the function passed.
 *
 * @name: string to be printed.
 * @f: pointer to the function to be used for printing
 * the string.
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
