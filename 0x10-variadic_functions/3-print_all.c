#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_all - This is the function
 *@format: this is a variable
 *Return: returns 0
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	int i = 0;

	va_start(ap, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(ap, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(ap, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, (float)va_arg(ap, double));
		}
		else if (format[i] == 's')
		{
			char *s = va_arg(ap, char *);

			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s%s", separator, s);
			}
		}
		separator = ", ";
		i++;
	}
	va_end(ap);
	printf("\n");
}
