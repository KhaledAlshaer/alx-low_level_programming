#include "main.h"

/**
 **malloc_checked - This is the function
 *@b: this is a variable
 *Return: returns 0
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
