#include "main.h"

/**
 *puts_half - This is the function
 *@str: this is a variable
 *Return: returns 0
*/
void puts_half(char *str)
{
	int i, j, x, n = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		n++;
	}
	if (n % 2 == 0)
	{
		for (j = n / 2; j <= n; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (x = (n - 1) / 2; x <= n; x++)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
