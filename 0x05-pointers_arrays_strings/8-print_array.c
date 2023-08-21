#include "main.h"
#include <stdio.h>

/**
 *print_array - This is the function
 *@a: this is a variable
 *@n: this is a variable
 *Return: returns 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}

