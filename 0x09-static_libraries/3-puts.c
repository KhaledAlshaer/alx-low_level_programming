#include "main.h"

/**
 *_puts - This is the function
 *@str: this is a variable
 *Return: returns 0
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
