#include "main.h"

/**
 *puts2 - This is the function
 *@str: this is a variable
 *Return: returns 0
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; str++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
