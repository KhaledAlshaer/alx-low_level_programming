#include "main.h"

/**
 *_pow_recursion - This is the function
 *@x: this is a variable
 *@y: this is a variable
 *Return: returns 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (0);
}
