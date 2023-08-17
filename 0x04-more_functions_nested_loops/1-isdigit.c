#include "main.h"

/**
 *_isdigit - This is the function
 *@c: this is the variable
 *Return: always returns 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
