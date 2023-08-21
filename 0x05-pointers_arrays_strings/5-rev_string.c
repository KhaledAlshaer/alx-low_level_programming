#include "main.h"

/**
 *rev_string - This is the function
 *@s: this is a variable
 *Return: returns 0
*/
void rev_string(char *s)
{
	int i, j;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = 0; j < i / 2; i++)
	{
		c = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = c;
	}
	_putchar('\n');
}
