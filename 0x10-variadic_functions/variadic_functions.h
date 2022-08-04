#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - A new struct for defining prints
 *
 * @symbol: symbol representing the data type.
 * @print_func: function pointer to funcion responsible to the
 * symbol.
 */
typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;

#endif
