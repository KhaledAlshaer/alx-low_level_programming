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
	size_t mid, i, right = size - 1, left = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
