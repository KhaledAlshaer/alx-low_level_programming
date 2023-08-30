#include "main.h"

/**
 *_strlen_recursion - This is the function
 *@s: this is a variable
 *Return: returns 0
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
