#include "main.h"

/**
 *more_numbers - This is the function
 *Return: always returns 0
 */
void more_numbers(void)
{
	int i, r, n;

	for (i = 0; i <= 10; i++)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r > 9)
			{
				_putchar(1 + '0');
				n = r % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}

}
