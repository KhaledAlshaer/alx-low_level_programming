#include "main.h"
#include <unistd.h>
/**
 *rev_string - This is the function
 *@s: this is a variable
 *Return: returns 0
*/
void rev_string(char *s)
{
	int i, j, n = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		n++;
	}
	for (j = 0; j < n / 2; j++)
	{
		c = s[i];
		s[i] = s[n - 1 - j];
		s[n - 1 - j] = c;
	}
	_putchar('\n');
}
