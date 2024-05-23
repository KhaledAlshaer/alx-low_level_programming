#include "search_algos.h"

/**
 *linear_search  - this is the function
 *@array: this is a vraiable
 *@size: this is a vraiable
 *@value: this is a vraiable
 *Return: return 0
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (array[i] != value && i <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}

	return (-1);
}
