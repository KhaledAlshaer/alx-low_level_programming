#include "main.h"

/**
 *clear_bit - This is the function
 *@n: this is a variable
 *@index: this is a variable
 *Return: returns 0
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}
