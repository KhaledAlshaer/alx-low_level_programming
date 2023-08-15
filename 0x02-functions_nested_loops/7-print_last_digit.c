#include "main.h"

/**
 *print_last_digit - function
 *@n: variable
 *Return: 0
 */

int print_last_digit(int last)
{
	if (last < 0)
	{
		last = -1 * (last % 10);
	}
	_putchar(last + '0');
	return (last);
}
