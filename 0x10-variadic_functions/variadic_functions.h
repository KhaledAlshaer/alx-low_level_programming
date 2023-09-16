#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h>

/**
 *struct format - A structure to hold format information
 *@f: this is a variable
 *@format: The format specifier string
*/
typedef struct format
{
	char *format;
	void (*f)(char *, va_list);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
