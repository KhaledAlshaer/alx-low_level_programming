#include "main.h"

/**
 *print_binary - Prints the binary representation of a given number.
 *@n: The number to print in binary.
 *Return: No return value.
 */
void print_binary(unsigned long int n)
{
	int mask = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n >> mask) != 0)
	{
		mask++;
	}

	for (mask--; mask >= 0; mask--)
	{
		if ((n >> mask) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
