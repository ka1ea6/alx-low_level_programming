#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints the strings passed as arguments
 * using the separator
 *
 * @separator: the separator used between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vaList;
	char *stringPointer;

	if (separator == NULL)
		separator = "";
	va_start(vaList, n);
	for (i = 0; i < n; i++)
	{
		stringPointer = va_arg(vaList, char*);

		if (stringPointer != NULL)
			printf("%s", stringPointer);
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vaList);
}
