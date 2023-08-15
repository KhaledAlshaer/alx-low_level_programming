#include "main.h"

/**
 *print_last_digit - function
 *@last: variable
 *Return: 0
 */

int print_last_digit(int last)
{
	last = last % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
