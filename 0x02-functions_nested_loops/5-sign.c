#include "main.h"

/**
 * print_sign - prins + if the number is greater than zero
 * prints 0 if n i zero and prints - if n is less than zero
 *
 * @n: The number
 *
 * Return: 1 for positive numbers. 0 for 0 and -1 for negetive numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
