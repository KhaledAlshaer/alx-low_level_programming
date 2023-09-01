#include "main.h"

/**
 **_memset - This is the function
 *@s: this is a variable
 *@b: this is a variable
 *@n: this is a variable
 *Return: returns 0
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
