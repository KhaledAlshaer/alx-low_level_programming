#include "main.h"

/**
 *_sqrt_recursion - This is the function
 *@n: this is a variable
 *@num: this is a variable
 *Return: returns 0
*/
int helping_function(int n, int num);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (helping_function(n, 0));
	}
}
/**
 *helping_function - This is the function
 *@n: this is a variable
 *@num: this is a variable
 * *Return: returns num
*/
int helping_function(int n, int num)
{
	if ((num * num) == n)
	{
		return (num);
	}
	else if ((num * num) > n)
	{
		return (-1);
	}
	else
	{
		return (helping_function(n, num + 1));
	}
}
