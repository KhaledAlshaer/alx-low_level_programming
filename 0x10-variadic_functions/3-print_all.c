#include "variadic_functions.h"
#include <stdio.h>

/**
 *format_char - This is the function
 *@separator: this is a variable
 *@ap: this is a variable
 *Return: returns 0
*/
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 *format_int - This is the function
 *@separator: this is a variable
 *@ap: this is a variable
 *Return: returns 0
*/
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 *format_float - This is the function
 *@separator: this is a variable
 *@ap: this is a variable
 *Return: returns 0
*/
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 *format_string - This is the function
 *@separator: this is a variable
 *@ap: this is a variable
 *Return: returns 0
*/
void format_string(char *separator, va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s%s", separator, s);
}

/**
 *print_all - This is the function
 *@format: this is a variable
 *Return: returns 0
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
	int j = 0;

	while (j < 4)
	{
		if (format[i] == "cifs"[j])
		{
		switch (format[i])
		{
			case 'c':
				format_char(separator, ap);
				break;
			case 'i':
				format_int(separator, ap);
				break;
			case 'f':
				format_float(separator, ap);
				break;
			case 's':
				format_string(separator, ap);
				break;
		}
			separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
