#include "function_pointers.h"

/**
 *array_iterator - This is the function
 *@array: this is a variable
 *@size: this is a variable
 *@action: this is a variable
 *Return: returns 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size + 1;

	if (array && size && action)
	{
		while (array <= e)
		{
			action(*array++);
		}
	}
}
