#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - This is the function
 *@a: this is a variable
 *@size: this is a variable
 *Return: returns 0
*/
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
	}
	printf("%d\n", d1);
	printf("%d\n", d2);
}
