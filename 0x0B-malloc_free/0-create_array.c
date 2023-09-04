#include "main.h"
#include <stdlib.h>

/**
 **create_array - This is the function
 *@size: this is a variable
 *@c: this is a variable
 *Return: returns 0
*/
char *create_array(unsigned int size, char c)
{
	char *p = malloc(size);

	if (size == 0 || p == 0)
	{
		return (0);
	}
	while (size--)
	{
		p[size] = c;
	}
	return (p);
}
