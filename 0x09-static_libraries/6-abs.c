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
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
