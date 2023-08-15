#include "main.h"

/**
 *_abs - prints the absolute value of an intger
 *@n: number to be checked
 *Return: number >= 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (-1 * n);
		_putchar(n);
		return (n);
	}
	else
	{
		return (n);
	}
}
