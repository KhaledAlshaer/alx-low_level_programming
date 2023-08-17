#include "main.h"

/**
 *print_line - This is the function
 *@n: this is a variable
 *Return: always returns 0
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}

