#include "main.h"

/**
 *print_rev - This is the function
 *@s: this is a variable
 *Return: returns 0
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
		while (i--)
		{
			_putchar(s[i]);
		}

	_putchar('\n');
}
