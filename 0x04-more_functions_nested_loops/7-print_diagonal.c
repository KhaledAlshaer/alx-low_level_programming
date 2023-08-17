#include "main.h"

/**
 *print_diagonal - This is the function
 *@n: this is the variable
 *Return: always returns 0
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
				_putchar('/');
				_putchar('\n');
			}
		}
	}
}

