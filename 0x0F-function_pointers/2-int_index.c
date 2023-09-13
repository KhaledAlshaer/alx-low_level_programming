#include "function_pointers.h"

/**
 *int_index - This is the function
 *@array: this is a variable
 *@size: this is a variable
 *@cmp: this is a variable
 *Return: returns 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
