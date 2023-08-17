#include "main.h"

/**
 *more_numbers - This is the function
 *Return: always returns 0
 */
void more_numbers(void)
{
	int i, c, n;

	for (i = 0; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + '0');
				n = c % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}

}
