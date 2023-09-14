#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - This is the function
 *@separator: this is a variable
 *@n: this is a variable
 *Return: returns 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);

		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
