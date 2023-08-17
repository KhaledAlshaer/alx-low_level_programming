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
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				if (i == j)
				{
					_putchar('/');
					continue;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

