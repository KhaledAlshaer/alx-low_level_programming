#include "main.h"

/**
 *print_binary - This is the function
 *@n: this is a variable
 *Return: returns 0
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
			_putchar('1');
		else
			_putchar('0');
	}
}
