#include "main.h"

/**
 *print_last_digit - function
 *@n: variable
 *Return: 0
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * (n % 10);
		return (n);
	}
	else
	{
		return (n);
	}
}
