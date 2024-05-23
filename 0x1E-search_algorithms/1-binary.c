#include "search_algos.h"

/**
 *binary_search - this is the function
 *@array: this is a vraiable
 *@size: this is a vraiable
 *@value: this is a vraiable
 *Return: return 0
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;

	if (array == NULL)
		return (-1);

	while (array[mid] != value && mid < size)
	{
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
			return (i);
		else if (array[mid] > value)
			mid = mid / 2;
		else
			mid = mid + (mid / 2);
	}

	return (-1);
}
