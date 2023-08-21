#include "main.h"

/**
 *swap_int - This is the function
 *@a: this is a variable
 *@b: this is a variable
 *Return: returns 0
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
