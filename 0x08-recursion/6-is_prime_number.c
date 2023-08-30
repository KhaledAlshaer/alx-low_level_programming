#include "main.h"

/**
 *is_prime_number - This is the function
 *@n: this is a variable
 *@divisor: this is a variable
 *Return: returns 0
*/
int helping_function(int n, int divisor);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helping_function(n, 2));
	}
}
/**
 *helping_function - This is the function
 *@n: this is a variable
 *@divisor: this is a variable
 *Return: returns 1 if prime or 0 otherwise
*/
int helping_function(int n, int divisor)
{
	if (divisor == n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (helping_function(n, divisor + 1));
	}
}
