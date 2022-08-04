#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints the numbers passed as argumets
 * using the separator
 *
 * @separator: the separator used between the numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vaList;

	if (separator == NULL)
		return (NULL);
	va_start(vaList, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(vaList, int), separator);
	}
	printf("%d", va_arg(vaList, int));
	printf("\n");
	va_end(vaList);
}
